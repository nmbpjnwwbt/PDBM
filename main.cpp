#include "defines.h"


#ifdef USE_PYTHON_CRYPTO
    #define _GLIBCXX_USE_CXX11_ABI 0
#endif


#include "mainwindow.h"
#include <QApplication>
#include <stdio.h>
#include <stdlib.h>
#include <QtGui>

#include <iostream>
#include <iomanip>
#include "cryptopp_headers/aes.h"
#include "cryptopp_headers/modes.h"
#include "cryptopp_headers/osrng.h"
#ifdef USE_PYTHON_CRYPTO
    #include <boost/python.hpp>
#endif

#ifdef USE_CRYPTOPP
void encrypt(char inputFile[256]){
    CryptoPP::AutoSeededRandomPool rnd;
    // Generate a random key
    CryptoPP::SecByteBlock key(0x00, 16);
    rnd.GenerateBlock(key, key.size());

    // Generate a random IV
    CryptoPP::SecByteBlock iv(CryptoPP::AES::BLOCKSIZE);
    rnd.GenerateBlock(iv, iv.size());

    CryptoPP::byte plainText[]="Hello! How are you.";
    size_t messageLen=std::strlen((char*)plainText)+1;

    //////////////////////////////////////////////////////////////////////////
    // Encrypt

    CryptoPP::CFB_Mode< CryptoPP::AES >::Encryption encryptor(key, key.size(), iv);
    encryptor.ProcessData(plainText, plainText, messageLen);
}
#endif



void MessageOutputHandler(QtMsgType type, const QMessageLogContext &context __attribute__((unused)), const QString &msg){
    QByteArray localMsg=msg.toLocal8Bit();
    //fprintf(stderr, "%s (%s:%u, %s)", localMsg.constData(), context.file, context.line, context.function);
    switch(type){
        case QtDebugMsg:
            fprintf(stderr, "\033[37;1m%s\033[0m", localMsg.constData());
        break;
        case QtInfoMsg:
            fprintf(stderr, "\033[36;1m%s\n\033[0m", localMsg.constData());
        break;
        case QtWarningMsg:
            fprintf(stderr, "\033[33;1mWarning:\033[0m \033[37;1m%s\033[0m\n", localMsg.constData());
        break;
        case QtCriticalMsg:
            fprintf(stderr, "Critical: \033[37;1m%s\033[0m\n", localMsg.constData());
        break;
        case QtFatalMsg:
            fprintf(stderr, "Fatal: %s\n", localMsg.constData());
            fflush(stderr);
            abort();
    }
    fflush(stderr);
}

int main(int argc, char *argv[]){
    qInstallMessageHandler(MessageOutputHandler);


/*
    std::string c="dcdcbe6e5e4ee234232436634a60354b";
    std::string b="dc0ed85df9611abb7249cdd168c5467e", d=b;

    std::cout<<std::hex;
    b=from_hex(b);
    c=from_hex(c);
    for(uint32_t i=0; i<c.length(); i++){
        d[i]=c[i]^b[i];
    }
    d=to_hex(d);
    std::cout<<d<<"\n";
    boost::python::api::object main_module;
    boost::python::api::object main_namespace;
    Py_Initialize();
    main_module=boost::python::import("__main__");
    main_namespace=main_module.attr("__dict__");
    try{
        exec("from Crypto.Cipher import AES\nfrom Crypto import Random", main_namespace);
    }catch(boost::python::error_already_set const &){
        qCritical()<<"no python Crypto package found";
    }



    std::string filedata("\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 32);
    std::cout<<"\n";
    std::string password="abcd5fghjtkdnsid";
    std::string iv=      "0000000000000000", cryout;
    password=filedata;
    password[0]=1;
    boost::python::exec("iv='0000000000000000'\ntoEncode='test'\nkey='test'", main_namespace);
    main_namespace["toEncode"]=boost::python::object(filedata.substr(0,16));
    main_namespace["key"]=     boost::python::object(password.substr(0,16));
    main_namespace["iv"]=      boost::python::object(filedata.substr(0,16));
    std::cout<<"pyout=\"";
    try{
        boost::python::exec("asdf=AES.new(key, AES.MODE_CFB, iv, segment_size=256).encrypt(toEncode)\nasdfg=\"\"\nfor i in asdf:\n\tfg=str(hex(ord(i)))[2:]\n\tif(len(fg)==1):\n\t\tfg='0'+fg\n\tasdfg+=fg\nprint(asdfg)", main_namespace);
        boost::python::exec("toEncode='done'\nkey='done'", main_namespace);
    }catch(boost::python::error_already_set const&){
        PyErr_Print();
        return 1;
    }

    std::cout<<"crout=\"";

    CryptoPP::SecByteBlock ivsbb((const CryptoPP::byte *)filedata.c_str(), 16);

    CryptoPP::CFB_Mode<CryptoPP::AES>::Encryption encryptor(reinterpret_cast<const uint8_t*>(password.c_str()), 16, ivsbb);
    uint8_t *strbuf= new uint8_t[32];
    for(uint32_t i=0; i<32; i++){
        strbuf[i]=i;
    }
    for(uint32_t i=0; i<16; i++){
        filedata[i]=(b[i<<1]<<4)+b[(i<<1)+1];
    }
    encryptor.ProcessData(strbuf, reinterpret_cast<const uint8_t*>(filedata.c_str()), 16);
    for(uint32_t i=0; i<32; i++){
        if(uint8_t(strbuf[i])<16)
            std::cout<<'0';
        std::cout<<uint32_t(uint8_t(strbuf[i]));
    }

    return 0;*/
    //qDebug()<<QString(argv[0]);
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
