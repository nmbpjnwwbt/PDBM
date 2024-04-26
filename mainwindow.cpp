#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "guiclasses/QRadioButton2.h"
#include "guiclasses/sitebutton.h"
#include <stdint.h>
#include <fstream>
#include <unistd.h>
#include <memory.h>
#include <random>
#include <QString>
#include <QDebug>




std::string str_from_hex(std::string in){
    for(uint32_t i=0; i<in.length(); i++){
        if(in[i]>='a')
            in[i]-='a'-'9'-1;
        else if(in[i]>='A')
            in[i]-='A'-'9'-1;
        in[i]-='0';
        if(uint8_t(in[i])>15)
            throw "invalid value at "+std::to_string(i);
        if(i%2)
            in[i>>1]|=in[i];
        else
            in[i>>1]=in[i]<<4;

    }
    return in.substr(0,in.length()>>1);
}
std::string str_to_hex(std::string in){
    std::string out="";
    for(uint32_t i=0; i<in.length(); i++){
        if((uint8_t(in[i])>>4)<=9){
            out+=(uint8_t(in[i])>>4)+'0';
        }else{
            out+=(uint8_t(in[i])>>4)+'A'-10;
        }

        if((uint8_t(in[i])&15)<=9){
            out+=(uint8_t(in[i])&15)+'0';
        }else{
            out+=(uint8_t(in[i])&15)+'A'-10;
        }
    }
    return out;
}

#ifdef USE_PYTHON_CRYPTO
    inline  boost::python::object to_pyBytes(const char *in){ return boost::python::object(boost::python::handle<>(PyBytes_FromString(in)));}
    inline  boost::python::object to_pyBytes(const char *in, __ssize_t len){ return boost::python::object(boost::python::handle<>(PyBytes_FromStringAndSize(in, len)));}
    inline  boost::python::object to_pyBytes(const std::string &in){ return boost::python::object(boost::python::handle<>(PyBytes_FromStringAndSize(in.c_str(), in.length())));}
#endif

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow){
    path=QCoreApplication::applicationFilePath().toStdString();
    path=path.substr(0,path.rfind('/')+1);
    ui->setupUi(this);//DO NOT WRITE BEFORE THAT

    //-------------------------------------------------------------------------------preparing python
    #ifdef USE_PYTHON_CRYPTO
        Py_Initialize();
        main_module=boost::python::import("__main__");
        main_namespace=main_module.attr("__dict__");
        try{
            exec("from Crypto.Cipher import AES\nfrom Crypto import Random", main_namespace);
        }catch(boost::python::error_already_set const &){
            qCritical()<<"no python Crypto package found";
        }
    #else
        ui->CFB8CheckBox->setVisible(0);
        #ifndef USE_CRYPTOPP
        #endif
    #endif

    //-------------------------------------------------------------------------------back to UI
    hideEverything();
    //on_disableBottomMainWidgetButton_clicked();
    currentSiteButton=0;
    ui->loadingFrame->setVisible(1);
    ui->videoWidget->setVisible(0);
    ui->graphicsView->setVisible(0);
    ui->bottomMainWidget->setVisible(0);
    ui->bruter->setVisible(0);
    for(int i=32; i<127; i++){
        if(i==10) charRadioButton[i-32]=new QRadioButton2("0a_", ui->possibleCharsScroll);
        else      charRadioButton[i-32]=new QRadioButton2(""+QString::number(i, 16).rightJustified(2,'0')+"_"+char(i), ui->possibleCharsScroll);
        reinterpret_cast<QGridLayout*>(ui->possibleCharsScroll->layout())->addWidget(charRadioButton[i-32],(i-32)%8, (i-32)/8);
        charRadioButton[i-32]->setAutoExclusive(0);
        if(((i>=0x30)&&(i<=0x39))||((i>=0x41)&&(i<=0x5a))||((i>=0x61)&&(i<=0x7a)))
            charRadioButton[i-32]->setChecked(1);
    }
    reinterpret_cast<QGridLayout*>(ui->possibleCharsScroll->layout())->setColumnStretch(12,1);

    connect(ui->passwordEdit, &QLineEdit::textChanged, this, &MainWindow::on_repeatPasswordEdit_textChanged);
    connect(ui->dbList, &QListWidget::itemActivated, this, &MainWindow::on_openFileButton_clicked);

    ASCIIonlyValidator=static_cast<QValidator*>(new QRegExpValidator(QRegExp("[ -~]*")));
    HexaValidator=static_cast<QValidator*>(new QRegExpValidator(QRegExp("([0-9]|[A-F]|[a-f])*")));
    mainGraphicsScene=new QGraphicsScene2(this);
    mainGraphicsScene->mainView=ui->graphicsView;
    ui->graphicsView->setScene(mainGraphicsScene);
    mediaPlayer=new QMediaPlayer(this);
    mediaPlayer->setVideoOutput(ui->videoWidget);
    mediaPlayer->setMedia(0);

    ui->domainLineEdit->setValidator(ASCIIonlyValidator);
    ui->descriptionLineEdit->setValidator(ASCIIonlyValidator);
    ui->passwordLineEdit->setValidator(ASCIIonlyValidator);
    ui->loginLineEdit->setValidator(ASCIIonlyValidator);
    ui->passwordEdit->setValidator(HexaValidator);
    ui->repeatPasswordEdit->setValidator(HexaValidator);
    ui->keyLineEdit->setValidator(HexaValidator);
}
MainWindow::~MainWindow(){
    delete ui;
    delete ASCIIonlyValidator;
    delete HexaValidator;
}


void MainWindow::clearLists(){
    QLayoutItem *item;
    while((item=ui->scrollAreaHolder->layout()->takeAt(0))){
        delete item->widget();
        delete item;
    }
    siteButtons.clear();
    while((item=ui->scrollFilesHolder->layout()->takeAt(0))){
        delete item->widget();
        delete item;
    }
    fileButtons.clear();
    fileToDelete_segfaultOverride=0;
}
void MainWindow::hideEverything(){
    ui->loadingFrame->setVisible(0);
    ui->decryptFrame->setVisible(0);
    ui->passwordsFrame->setVisible(0);
    ui->randomizerFrame->setVisible(0);
    ui->filesFrame->setVisible(0);
    ui->fileEditFrame->setVisible(0);
    ui->codingErrorDisplay->setText("");
}
SiteButton* MainWindow::newSiteButton(){
    siteButtons.push_back(0);
    siteButtons[siteButtons.size()-1]=new SiteButton(ui->scrollSites);
    ui->scrollAreaHolder->layout()->addWidget(siteButtons[siteButtons.size()-1]);
    siteButtons[siteButtons.size()-1]->setObjectName("siteButton"+QString::number(nextSiteId));
    siteButtons[siteButtons.size()-1]->setStyleSheet("#siteButton"+QString::number(nextSiteId)+"{ border-style: outset; }");
    siteButtons[siteButtons.size()-1]->setMinimumHeight(10);
    QObject::connect(siteButtons[siteButtons.size()-1], SIGNAL(clicked(SiteButton *)), this, SLOT(siteButton_clicked(SiteButton *)));
    nextSiteId++;
    return siteButtons[siteButtons.size()-1];
}
FileButton* MainWindow::newFileButton(){
    fileButtons.push_back(0);
    fileButtons[fileButtons.size()-1]=new FileButton(ui->scrollFiles);
    ui->scrollFilesHolder->layout()->addWidget(fileButtons[fileButtons.size()-1]);
    fileButtons[fileButtons.size()-1]->setObjectName("fileButton"+QString::number(nextFileId));
    fileButtons[fileButtons.size()-1]->setStyleSheet("#fileButton"+QString::number(nextFileId)+"{ border-style: outset;}");
    fileButtons[fileButtons.size()-1]->setMinimumHeight(10);
    QObject::connect(fileButtons[fileButtons.size()-1], SIGNAL(clicked(FileButton *)), this, SLOT(fileButton_clicked(FileButton *)));
    nextFileId++;
    return fileButtons[fileButtons.size()-1];
}
std::string MainWindow::dumpData(){
    std::string output="PDB";
    if(siteButtons.size()==0) return "nothing to save";
    if((siteButtons.size())>>16) return "too many passwords (65535 is max)";
    output+=static_cast<unsigned char>((siteButtons.size())>>8);
    output+=static_cast<unsigned char>(siteButtons.size());
    for(uint16_t i=0; i<siteButtons.size(); i++){
        output+=reinterpret_cast<SiteButton*>(ui->scrollAreaHolder->layout()->itemAt(i)->widget())->toSave();
    }
    return output;
}
void MainWindow::addPadding(std::string &input){
    uint8_t j=16-(input.size()%16);
    for(uint32_t i=0; i<j; i++){
        input+=j;
    }
}
void MainWindow::removePadding(std::string &input){
    uint8_t j=input[input.size()-1];
    if(j>16){
        qWarning()<<"input has no padding\n";
        return;
    }
    input.erase(input.size()-j);
}
void MainWindow::prepareFileForDisplay(){
    unsigned char pngsignature[8]={137, 'P', 'N', 'G', 13, 10, 26, 10},
                  bmpsignature[2]={'B', 'M'},
                  gifsignature[4]={'G', 'I', 'F', '8'},
                  jpgsignature[3]={255, 0xd8, 255};


    QList<QGraphicsItem *> itemsbuflist=mainGraphicsScene->items();
    QGraphicsItem *itembuf;
    while(itemsbuflist.isEmpty()==0){
        itembuf=itemsbuflist.takeFirst();
        mainGraphicsScene->removeItem(itembuf);
        delete itembuf;
    }

    do{
        bool found=1;
        for(uint32_t i=0; i<8; i++){
            if(fileContents[i]==char(pngsignature[i])){
                continue;
            }else{
                found=0;
                break;
            }
        }
        if(found){// png
            QByteArray *byteArrayBuf=new QByteArray(QByteArray::fromStdString(fileContents));
            QImage *imagebuf=new QImage();
            if(imagebuf->loadFromData(*byteArrayBuf)==0){
                ui->fileErrorLabel->setText("could not load png file");
                delete imagebuf;
                delete byteArrayBuf;
                break;
            }
            delete byteArrayBuf;
            QPixmap *pixmapbuf=new QPixmap();
            pixmapbuf->convertFromImage(*imagebuf);
            delete imagebuf;
            mainGraphicsScene->addPixmap(*pixmapbuf);
            delete pixmapbuf;
            mainGraphicsScene->setSceneRect(mainGraphicsScene->itemsBoundingRect());
            ui->videoWidget->setVisible(0);
            ui->graphicsView->setVisible(1);


            break;
        }else found=1;
        for(uint32_t i=0; i<2; i++){
            if(fileContents[i]==bmpsignature[i])
                continue;
            else{
                found=0;
                break;
            }
        }
        if(found){// bmp
            QByteArray *byteArrayBuf=new QByteArray(QByteArray::fromStdString(fileContents));
            QImage *imagebuf=new QImage();
            if(imagebuf->loadFromData(*byteArrayBuf)==0){
                ui->fileErrorLabel->setText("could not load bmp file");
                delete imagebuf;
                delete byteArrayBuf;
                break;
            }
            delete byteArrayBuf;
            QPixmap *pixmapbuf=new QPixmap();
            pixmapbuf->convertFromImage(*imagebuf);
            delete imagebuf;
            mainGraphicsScene->addPixmap(*pixmapbuf);
            delete pixmapbuf;
            mainGraphicsScene->setSceneRect(mainGraphicsScene->itemsBoundingRect());
            ui->videoWidget->setVisible(0);
            ui->graphicsView->setVisible(1);


            break;
        }else found=1;
        for(uint32_t i=0; i<4; i++){
            if(fileContents[i]==gifsignature[i])
                continue;
            else{
                found=0;
                break;
            }
        }
        if(found){// gif
            ui->videoWidget->setVisible(1);
            ui->graphicsView->setVisible(0);

            break;
        }else found=1;
        for(uint32_t i=0; i<3; i++){
            if(fileContents[i]==jpgsignature[i])
                continue;
            else{
                found=0;
                break;
            }
        }
        if(found){// jpg

            break;
        }else found=1;
    }while(0);
}

void MainWindow::fileButton_clicked(FileButton *button){// todo
    if(fileToDelete_segfaultOverride){
        delete fileToDelete_segfaultOverride;
        fileToDelete_segfaultOverride=0;
    }
    if(static_cast<QApplication*>(QApplication::instance())->keyboardModifiers()&Qt::ShiftModifier){
        if(static_cast<QApplication*>(QApplication::instance())->keyboardModifiers()&Qt::ControlModifier){
            ui->scrollFilesHolder->layout()->removeWidget(button);
            for(int i=0;1;i++)
                if(button==fileButtons[i]){
                    fileButtons.erase(fileButtons.begin()+i);
                    break;
                }
            fileToDelete_segfaultOverride=button;
            return;
        }
        int index=ui->scrollFilesHolder->layout()->indexOf(button);
        if(index==0){
            ui->scrollFilesHolder->layout()->removeWidget(button);
            ui->scrollFilesHolder->layout()->addWidget(button);
        }else{
            ui->scrollFilesHolder->layout()->removeWidget(button);
            reinterpret_cast<QBoxLayout*>(ui->scrollFilesHolder->layout())->insertWidget(index-1, button);
        }
    }else
    if(static_cast<QApplication*>(QApplication::instance())->keyboardModifiers()&Qt::ControlModifier){
        uint32_t index=ui->scrollFilesHolder->layout()->indexOf(button);
        if(index==fileButtons.size()-1){
            ui->scrollFilesHolder->layout()->removeWidget(button);
            reinterpret_cast<QBoxLayout*>(ui->scrollFilesHolder->layout())->insertWidget(0, button);
            return;
        }
        ui->scrollFilesHolder->layout()->removeWidget(button);
        reinterpret_cast<QBoxLayout*>(ui->scrollFilesHolder->layout())->insertWidget(index+1, button);
    }else{
        hideEverything();
        ui->fileEditFrame->setVisible(1);
        currentFileButton=button;
        ui->keyLineEdit->setText(QString::fromStdString(button->keyToHex()));
        ui->pathLineEdit->setText(button->path->text());
        ui->fileDescLineEdit->setText(QString::fromStdString(button->description));
        /*
        //ui->randomizerFrame->setVisible(1);
        //currentSiteButton=button;
        ui->domainLineEdit->setText(QString::fromStdString(button->rawdata[0]));
        ui->descriptionLineEdit->setText(QString::fromStdString(button->rawdata[1]));
        ui->loginLineEdit->setText(QString::fromStdString(button->rawdata[2]));
        ui->passwordLineEdit->setText(QString::fromStdString(button->rawdata[3]));*/
    }
}
void MainWindow::siteButton_clicked(SiteButton *button){
    if(static_cast<QApplication*>(QApplication::instance())->keyboardModifiers()&Qt::ShiftModifier){
        if(static_cast<QApplication*>(QApplication::instance())->keyboardModifiers()&Qt::ControlModifier){
            ui->scrollAreaHolder->layout()->removeWidget(button);
            for(uint32_t i=0; i<siteButtons.size(); i++)
                if(button==siteButtons[i]){
                    siteButtons.erase(siteButtons.begin()+i);
                    break;
                }
            button->deleteLater();
            return;
        }
        int index=ui->scrollAreaHolder->layout()->indexOf(button);
        if(index==0){
            ui->scrollAreaHolder->layout()->removeWidget(button);
            ui->scrollAreaHolder->layout()->addWidget(button);
        }else{
            ui->scrollAreaHolder->layout()->removeWidget(button);
            reinterpret_cast<QBoxLayout*>(ui->scrollAreaHolder->layout())->insertWidget(index-1, button);
        }
    }else
    if(static_cast<QApplication*>(QApplication::instance())->keyboardModifiers()&Qt::ControlModifier){
        uint32_t index=ui->scrollAreaHolder->layout()->indexOf(button);
        if(index==siteButtons.size()-1){
            ui->scrollAreaHolder->layout()->removeWidget(button);
            reinterpret_cast<QBoxLayout*>(ui->scrollAreaHolder->layout())->insertWidget(0, button);
            return;
        }
        ui->scrollAreaHolder->layout()->removeWidget(button);
        reinterpret_cast<QBoxLayout*>(ui->scrollAreaHolder->layout())->insertWidget(index+1, button);
    }else{
        hideEverything();
        ui->randomizerFrame->setVisible(1);
        currentSiteButton=button;
        ui->domainLineEdit->setText(QString::fromStdString(button->rawdata[0]));
        ui->descriptionLineEdit->setText(QString::fromStdString(button->rawdata[1]));
        ui->loginLineEdit->setText(QString::fromStdString(button->rawdata[2]));
        ui->passwordLineEdit->setText(QString::fromStdString(button->rawdata[3]));
    }
}
void MainWindow::on_actionNewDataBase_triggered(){
    hideEverything();
    ui->passwordsFrame->setVisible(1);
    ui->filenameDLabel->setText("new");
    if(!ui->dontClearPasswordBox->isChecked()){
        ui->passwordEdit->setText("");
        ui->repeatPasswordEdit->setText("");
    }
    clearLists();
}
void MainWindow::on_actionNewKeyVector_triggered(){
    hideEverything();
    ui->filesFrame->setVisible(1);
    ui->filenameKLabel->setText("new");
    if(!ui->dontClearPasswordBox->isChecked()){
        ui->passwordEdit->setText("");
        ui->repeatPasswordEdit->setText("");
    }
    clearLists();
}
void MainWindow::on_actionOpen_loader_triggered(){
    hideEverything();
    ui->loadingFrame->setVisible(1);
    if(!ui->dontClearPasswordBox->isChecked()){
        ui->passwordEdit->setText("");
        ui->repeatPasswordEdit->setText("");
    }
}
void MainWindow::on_addNewPasswordButton_clicked(){
    bool checkfine=1;
    if(ui->domainLineEdit->text().size()==0){
        checkfine=0;
        ui->domainLineEdit->setStyleSheet("QLineEdit{ background-color: #601010; }");
    }else ui->domainLineEdit->setStyleSheet("");
    if(ui->loginLineEdit->text().size()==0){
        checkfine=0;
        ui->loginLineEdit->setStyleSheet("QLineEdit{ background-color: #601010; }");
    }else ui->loginLineEdit->setStyleSheet("");
    if(ui->passwordLineEdit->text().size()==0){
        checkfine=0;
        ui->passwordLineEdit->setStyleSheet("QLineEdit{ background-color: #601010; }");
    }else ui->passwordLineEdit->setStyleSheet("");
    if(checkfine){
        if(currentSiteButton==0){
            SiteButton *sbbuf=newSiteButton();
            sbbuf->setText(ui->domainLineEdit->text(), ui->descriptionLineEdit->text());
            sbbuf->setData(ui->loginLineEdit->text(), ui->passwordLineEdit->text());
        }else{
            currentSiteButton->setText(ui->domainLineEdit->text(), ui->descriptionLineEdit->text());
            currentSiteButton->setData(ui->loginLineEdit->text(), ui->passwordLineEdit->text());
            currentSiteButton=0;
        }
        hideEverything();
        ui->passwordsFrame->setVisible(1);
    }else return;
}
void MainWindow::on_backToFileListButton_clicked(){
    if(!ui->dontClearPasswordBox->isChecked()){
        ui->passwordEdit->setText("");
        ui->repeatPasswordEdit->setText("");
    }
    ui->codingErrorDisplay->setText("");
    hideEverything();
    if(ui->decryptButton->styleSheet().size()>0)
        ui->passwordsFrame->setVisible(1);
    else
        ui->loadingFrame->setVisible(1);
}
void MainWindow::on_decryptButton_clicked(){
    ui->codingErrorDisplay->setText("");
    if(ui->decryptButton->styleSheet().size()){
        if(on_decryptButton_clicked_encrypt())
            return;
    }else{
        if(on_decryptButton_clicked_decrypt())
            return;
    }
    if(!ui->dontClearPasswordBox->isChecked()){
        ui->passwordEdit->setText("");
        ui->repeatPasswordEdit->setText("");
    }
    hideEverything();
    ui->passwordsFrame->setVisible(1);
}
int MainWindow::on_decryptButton_clicked_decrypt(){
    std::fstream file;
    file.open(path+"/db/"+ui->filenameEdit->text().toStdString(), std::ios::in|std::ios::binary);
    if(!file.good()){
        ui->codingErrorDisplay->setText("could not open file");
        return 1;
    }
    std::string input="", line="";
    while(getline(file, line)){
        input+=line+'\n';
    }
    file.close();
    input.pop_back();
    if(input.size()<13){
        ui->codingErrorDisplay->setText("database is corrupted (file is so small)");
        return 1;
    }
    if(ui->passwordEdit->text().size()){// decrypt
        std::string password=ui->passwordEdit->text().toStdString();
        if((password.length()!=32)&&(password.length()!=48)&&(password.length()!=64)){
            ui->codingErrorDisplay->setText(("password can be either 16, 24 or 32 bytes long, not "+std::to_string(password.length()/2)+((password.length()&1)?".5":"")).c_str());
            return 1;
        }
        password=str_from_hex(password);
        #ifdef USE_PYTHON_CRYPTO
            boost::python::exec("iv='test'\ntoDecrypt='test'\nkey='test'", main_namespace);
            main_namespace["toDecrypt"]=to_pyBytes(input);
            main_namespace["key"]=      to_pyBytes(password);
            main_namespace["iv"]=       to_pyBytes(input.substr(0, 16));
            try{
                input=std::string(boost::python::extract<std::string>(boost::python::eval(
                        ("AES.new(key, AES.MODE_CFB, iv, segment_size="+
                           std::to_string(ui->CFB8CheckBox->isChecked()?8:password.length()<<3)+
                           ").decrypt(toDecrypt)").c_str(),
                         main_namespace))).substr(16);
                boost::python::exec("toDecrypt='done'\nkey='done'", main_namespace);
            }catch(boost::python::error_already_set const&){
                ui->codingErrorDisplay->setText("Python crash. Details in console.");
                PyErr_Print();
                return 1;
            }
        #elif defined(USE_CRYPTOPP)
            CryptoPP::SecByteBlock iv(CryptoPP::AES::BLOCKSIZE);
            iv=CryptoPP::SecByteBlock(reinterpret_cast<const uint8_t*>(input.substr(0, 16).c_str()), 16);

            CryptoPP::CFB_Mode<CryptoPP::AES>::Decryption decryptor(reinterpret_cast<const uint8_t*>(password.c_str()), password.length(), iv);
            uint8_t *strbuf= new uint8_t[input.length()];
            decryptor.ProcessData(strbuf, reinterpret_cast<const uint8_t*>(input.c_str()), input.length());
            input.replace(0, input.length(), reinterpret_cast<const char*>(strbuf), input.length());
            input.erase(0, 16);
            for(uint8_t *i=strbuf, *end=strbuf+input.length()+1; i<end; i++)
                *i='0';
            delete[] strbuf;

        #endif
    }
    if(input.substr(0,3)!="PDB"){ ui->codingErrorDisplay->setText("database is corrupted or uses different password (wrong header)");
        qDebug()<<"first 20 decrypted B="<<QString::fromStdString(input.substr(0,20));
        return 1;
    }
    input=input.substr(3);
    uint16_t sitescount=input[0];
    sitescount<<=8;
    sitescount+=input[1];
    input=input.substr(2);
    QLayoutItem *item;
    while((item=ui->scrollAreaHolder->layout()->takeAt(0))){
        delete item->widget();
        delete item;
    }
    siteButtons.clear();
    SiteButton *newsitebutton=0;
    for(uint16_t i=0; i<sitescount; i++){
        newsitebutton=newSiteButton();
        if(newsitebutton->load(input)){
            ui->codingErrorDisplay->setText("database is corrupted or uses different password ("+QString::number(i)+")");
            while((item=ui->scrollAreaHolder->layout()->takeAt(0))){
                delete item->widget();
                delete item;
            }
            siteButtons.clear();
            return 1;
        }
        newsitebutton=0;
    }
    return 0;
}
int MainWindow::on_decryptButton_clicked_encrypt(){
    std::string filedata=dumpData();
    if(filedata.substr(0,3)!="PDB"){
        ui->codingErrorDisplay->setText(QString::fromStdString(filedata));
        return 1;
    }

    if(ui->passwordEdit->text().size()){// encrypt
        std::string password=ui->passwordEdit->text().toStdString();
        if((password.length()!=32)&&(password.length()!=48)&&(password.length()!=64)){
            ui->codingErrorDisplay->setText(("password can be either 16, 24 or 32 bytes long, not "+std::to_string(password.length()/2.0)+((password.length()&1)?".5":"")).c_str());
            return 1;
        }
        if(!ui->passwordsMatchDot->isChecked()){
            ui->codingErrorDisplay->setText("you have misspelled something, please retype");
            return 1;
        }
        password=str_from_hex(password);
        #ifdef USE_PYTHON_CRYPTO
            boost::python::exec("iv=Random.new().read(16)\ntoEncrypt=b'test'\nkey=b'test'", main_namespace);
            addPadding(filedata);
            main_namespace["toEncrypt"]=to_pyBytes(filedata);
            main_namespace["key"]=      to_pyBytes(password);
            try{
                filedata=boost::python::extract<std::string>(boost::python::eval(
                        ("iv+AES.new(key, AES.MODE_CFB, iv, segment_size="+
                           std::to_string(ui->CFB8CheckBox->isChecked()?8:password.length()<<3)+
                           ").encrypt(toEncrypt)"
                        ).c_str(),
                        main_namespace));
                boost::python::exec("toEncrypt=b'done'\nkey=b'done'", main_namespace);
            }catch(boost::python::error_already_set const&){
                ui->codingErrorDisplay->setText("Python crash. Details in console.");
                PyErr_Print();
                return 1;
            }
        #elif defined(USE_CRYPTOPP)
            CryptoPP::AutoSeededRandomPool rnd;
            addPadding(filedata);
            CryptoPP::SecByteBlock iv(CryptoPP::AES::BLOCKSIZE);
            rnd.GenerateBlock(iv, iv.size());

            CryptoPP::CFB_Mode<CryptoPP::AES>::Encryption encryptor(reinterpret_cast<const uint8_t*>(password.c_str()), password.length(), iv);
            uint8_t *strbuf= new uint8_t[filedata.length()];
            encryptor.ProcessData(strbuf, reinterpret_cast<const uint8_t*>(filedata.c_str()), filedata.length());
            filedata.replace(0, 16, reinterpret_cast<const char*>(iv.BytePtr()), 16);
            filedata+=std::string(16, '0');
            filedata.replace(16, filedata.length()-16, reinterpret_cast<const char*>(strbuf), filedata.length()-16);
            for(uint8_t *i=strbuf, *end=strbuf+filedata.length()-15; i<end; i++)
                *i='0';
            delete[] strbuf;
        #endif
    }
    std::fstream file;
    file.open(path+"/db/"+ ui->filenameEdit->text().toStdString(), std::ios::out|std::ios::binary);
    if(file.good()){
        file<<filedata;
    }
    else{ ui->codingErrorDisplay->setText("could not open file");
        file.close();
        return 1;
    }
    file.close();
    return 0;
}
void MainWindow::on_disableBottomMainWidgetButton_clicked(){
    ui->bottomMainWidget->setVisible(0);
}
void MainWindow::on_dontAddFileButton_clicked(){
    hideEverything();
    ui->filesFrame->setVisible(1);
}
void MainWindow::on_dontAddPasswordButton_clicked(){
    hideEverything();
    ui->passwordsFrame->setVisible(1);
}
void MainWindow::on_encryptFileButton_clicked(){// todo

    ui->overwriteCurrentFileButton->setFocus();
}
void MainWindow::on_generateKeyButton_clicked(){
    ui->keyLineEdit->clear();
    uint8_t letter[16]={'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    QString newpassword="";
    uint8_t randing;
    if(ui->useRollerGenerator->isChecked()){
        if(looped<16){
            ui->fileErrorLabel->setText("too little rolling, do more");
            return;
        }
        std::mt19937 rander;
        rander.seed(randomized);
        for(uint16_t i=0; i<ui->keyLengthBox->value(); i++){
            randing=rander()&15;
            newpassword+=letter[randing];
        }
        randomized=rander();
        looped+=(ui->keyLengthBox->value()+1)*8;
        ui->rollCounter->setText(QString::number(looped/8));
        ui->rollCounter_2->setText(QString::number(looped/8));
    }else{
        #ifdef USE_PYTHON_CRYPTO
            boost::python::object pyobj;
            for(uint16_t i=0; i<ui->keyLengthBox->value(); i++){
                boost::python::exec("randing=Random.new().read(1)", main_namespace);
                randing=std::string(boost::python::extract<std::string>(main_namespace["randing"]))[0];
                randing&=15;
                newpassword+=letter[randing];
            }
        #elif defined(USE_CRYPTOPP)
            CryptoPP::AutoSeededRandomPool rnd;

            for(uint16_t i=0; i<ui->keyLengthBox->value(); i++){
                randing=rnd.GenerateByte();
                randing&=15;
                newpassword+=letter[randing];
            }
        #else
            newpassword="Feature depends on cryptographic library. Use alternative method instead.";
        #endif

    }
    ui->keyLineEdit->setText(newpassword);
}
void MainWindow::on_generatePasswordButton_clicked(){
    int variety=0;
    uint8_t letter[95]={0};
    for(uint16_t i=0; i<95; i++){
        if(charRadioButton[i]->isChecked()){
            letter[variety]=i+32;
            variety++;
        }
    }
    ui->passwordLineEdit->clear();
    if(variety==0){
        ui->passwordLineEdit->setText("no characters selected");
        return;
    }
    if(variety==1){
        ui->passwordLineEdit->setText("seriously? just type them ("+QString(letter[0])+") I don't need to say it is pretty dumb idea, do I?");
        return;
    }
    QString newpassword="";
    uint8_t randing;
    if(ui->useRollerGenerator->isChecked()){
        if(looped<16){
            ui->passwordLineEdit->setText("too little rolling, do more");
            return;
        }
        std::mt19937 rander;
        rander.seed(randomized);
        for(uint16_t i=0; i<ui->passwordLengthBox->value(); i++){
            randing=rander();
            if(randing>=int(256/variety)*variety){
                i--;
                continue;
            }
            randing%=variety;
            newpassword+=letter[randing];
        }
        randomized=rander();
        looped+=(ui->passwordLengthBox->value()+1)*8;
        ui->rollCounter->setText(QString::number(looped/8));
        ui->rollCounter_2->setText(QString::number(looped/8));
    }else{
        #ifdef USE_PYTHON_CRYPTO
            boost::python::object pyobj;
            for(uint16_t i=0; i<ui->passwordLengthBox->value(); i++){
                boost::python::exec("randing=Random.new().read(1)", main_namespace);
                randing=std::string(boost::python::extract<std::string>(main_namespace["randing"]))[0];
                if(randing>=int(256/variety)*variety){
                    i--;
                    continue;
                }
                randing%=variety;
                newpassword+=letter[randing];
            }
        #elif defined(USE_CRYPTOPP)
            CryptoPP::AutoSeededRandomPool rnd;

            for(uint16_t i=0; i<ui->passwordLengthBox->value(); i++){
                randing=rnd.GenerateByte();
                if(randing>=int(256/variety)*variety){
                    i--;
                    continue;
                }
                randing%=variety;
                newpassword+=letter[randing];
            }

        #else
            newpassword="Feature depends on cryptographic library. Use alternative method instead.";
        #endif
    }
    if(ui->passwordLineEdit->isVisible())
        ui->passwordLineEdit->setText(newpassword);
    if(ui->keyLineEdit->isVisible())
        ui->keyLineEdit->setText(newpassword);
}
void MainWindow::on_headRoller_3_textEdited(const QString &arg1){
    uint8_t buffer=randomized>>28;
    if(arg1.size()!=1)
        ui->fileErrorLabel->setText("weird headRoll input: "+arg1);
    randomized^=arg1[0].toLatin1()&15;
    randomized=(randomized<<4)+buffer;
    looped++;
    ui->rollCounter->setText(QString::number(looped/8));
    ui->rollCounter_2->setText(QString::number(looped/8));
    ui->headRoller_3->clear();
}
void MainWindow::on_headRoller_textEdited(const QString &arg1){
    uint8_t buffer=randomized>>28;
    if(arg1.size()!=1)
        ui->passwordLineEdit->setText("weird headRoll input: "+arg1);
    randomized^=arg1[0].toLatin1()&15;
    randomized=(randomized<<4)+buffer;
    looped++;
    ui->rollCounter->setText(QString::number(looped/8));
    ui->rollCounter_2->setText(QString::number(looped/8));
    ui->headRoller->clear();
}
void MainWindow::on_mainOrientationButton_clicked(){
    if(ui->mainSplitter->orientation()==Qt::Horizontal){
        ui->mainSplitter->setOrientation(Qt::Vertical);
        ui->viewEditorSplitter->setOrientation(Qt::Horizontal);
    }else{
        ui->mainSplitter->setOrientation(Qt::Horizontal);
        ui->viewEditorSplitter->setOrientation(Qt::Vertical);
    }
}
void MainWindow::on_newEncryptedFileButton_clicked(){
    FileButton *fbbuf=newFileButton();
    fbbuf->validityCheck();
}
void MainWindow::on_newRecordButton_clicked(){
    hideEverything();
    ui->randomizerFrame->setVisible(1);
    ui->domainLineEdit->setText("");
    ui->descriptionLineEdit->setText("");
    ui->loginLineEdit->setText("");
    ui->passwordLineEdit->setText("");
    currentSiteButton=0;
}
void MainWindow::on_openFileButton_clicked(){
    if(ui->dbList->currentItem()){
        hideEverything();
        ui->decryptFrame->setVisible(1);
        ui->filenameDLabel->setText(ui->dbList->currentItem()->text());
        ui->filenameEdit->setText(ui->dbList->currentItem()->text());
        ui->filenameLabel1->setVisible(0);
        ui->filenameEdit->setVisible(0);
        ui->repeatPasswordEdit->setVisible(0);
        ui->repeatPasswordLabel->setVisible(0);
        ui->passwordsMatchDot->setVisible(0);
        ui->decryptButton->setText("decrypt");
        ui->decryptButton->setStyleSheet("");
    }
}
void MainWindow::on_overwriteCurrentFileButton_clicked(){
    bool checkfine=1;

    ui->keyLineEdit->setStyleSheet("");
    ui->pathLineEdit->setStyleSheet("");
    ui->fileErrorLabel->setText("");
    if(currentFileButton->hexToKey(ui->keyLineEdit->text().toStdString(), ui->fileErrorLabel)){
        ui->keyLineEdit->setStyleSheet("QLineEdit{ background-color: #601010; }");
        checkfine=0;
    }
    if(ui->pathLineEdit->text().length()==0){
        ui->pathLineEdit->setStyleSheet("QLineEdit{ background-color: #601010; }");
        ui->fileErrorLabel->setText("path can not be empty");
        checkfine=0;
    }else{
        std::fstream file;
        std::string filename=ui->pathLineEdit->text().toStdString();
        file.open(filename, std::ios::in|std::ios::binary);
        if(file.good()==0){
            ui->pathLineEdit->setStyleSheet("QLineEdit{ background-color: #601010; }");
            ui->fileErrorLabel->setText("could not open file, check the path");
            checkfine=0;
        }
    }

    if(checkfine){
        currentFileButton->description=ui->fileDescLineEdit->text().toStdString();
        currentFileButton->key=ui->keyLineEdit->text().toStdString();
        currentFileButton->path->setText(ui->pathLineEdit->text());
        currentFileButton->validityCheck(1);
        hideEverything();
        ui->filesFrame->setVisible(1);
    }
}
void MainWindow::on_refreshButton_clicked(){
    if(!dir.exists((path+"db").c_str())){
        dir.mkdir((path+"db").c_str());
    }
    ui->dbList->clear();

    dir.cd((path+"db").c_str());
    QFileInfoList finflist=dir.entryInfoList();
    for(int i=0; i<finflist.size(); i++){
        if(finflist.at(i).isFile()){
            ui->dbList->addItem(finflist.at(i).fileName());
        }
    }
    dir.cdUp();
}
void MainWindow::on_reloadFileButton_clicked(){
    std::fstream file;
    std::string line, path=ui->pathLineEdit->text().toStdString();
    file.open(path, std::ios::in|std::ios::binary);
    if(file.good()){
        if(ui->keyLineEdit->text().length()){

        }else{// load plaintext
            fileContents="";
            while(getline(file, line)){
                fileContents+=line+'\n';
            }
            file.close();
            fileContents.pop_back();
            prepareFileForDisplay();
        }
    }else{
        ui->fileErrorLabel->setText("could not open file");
    }
}
void MainWindow::on_repeatPasswordEdit_textChanged(const QString &arg1 __attribute__((unused))){
    if((ui->repeatPasswordEdit->text().size()==0)||(ui->repeatPasswordEdit->text()==ui->passwordEdit->text())){
        ui->passwordsMatchDot->setChecked(1);
        ui->passwordsMatchDot->setText("passwords match");
    }else{
        ui->passwordsMatchDot->setChecked(0);
        ui->passwordsMatchDot->setText("passwords don't match");
    }
}
void MainWindow::on_saveButton_clicked(){
    hideEverything();
    ui->decryptFrame->setVisible(1);
    ui->filenameLabel1->setVisible(1);
    ui->filenameEdit->setVisible(1);
    ui->repeatPasswordEdit->setVisible(1);
    ui->repeatPasswordLabel->setVisible(1);
    ui->passwordsMatchDot->setVisible(1);
    ui->filenameEdit->setText(ui->filenameDLabel->text());
    ui->decryptButton->setText("encrypt");
    ui->decryptButton->setStyleSheet("color: #ff0000;");
}
void MainWindow::on_showLettersCheckBox_toggled(bool checked){
    if(checked){
        ui->passwordEdit->setEchoMode(QLineEdit::Normal);
        ui->repeatPasswordEdit->setEchoMode(QLineEdit::Normal);
    }else{
        ui->passwordEdit->setEchoMode(QLineEdit::Password);
        ui->repeatPasswordEdit->setEchoMode(QLineEdit::Password);
    }
}

void MainWindow::on_bruter_clicked(){// remove hiding in constructor. NOT MAINTAINED: cipher mode mismatch
    std::fstream file;
    file.open("db/"+ui->filenameEdit->text().toStdString(), std::ios::in|std::ios::binary);
    if(!file.good()){ ui->codingErrorDisplay->setText("could not open file");
        return;
    }
    std::string input="", line="";
    while(getline(file, line)){
        input+=line+"\n";
    }
    file.close();
    input.pop_back();
    if(input.size()<13){ ui->codingErrorDisplay->setText("database is corrupted (file is so small)");
        return;
    }
    std::string password=ui->passwordEdit->text().toStdString();
    if((password.length()==32)||(password.length()==48)||(password.length()==64)){
        for(uint16_t i=0; i<password.length(); i++){
            if(password[i]>90)
                password[i]-=32;
            if(password[i]>60)
                password[i]-=7;
            password[i]-=48;
            if(i%2)
                password[i>>1]|=password[i];
            else
                password[i>>1]=password[i]<<4;
        }
        password=password.substr(0, password.length()>>1);
    }else{
        ui->codingErrorDisplay->setText("password can be either 16, 24 or 32 bytes long");
        return;
    }
    std::string password2, result;
    for(uint32_t i=0; i<0x1; i++){
        //password2[  ]=i&
        #ifdef USE_PYTHON_CRYPTO
            boost::python::exec("iv='test'\ntoDecrypt='test'\nkey='test'", main_namespace);
            main_namespace["toDecrypt"]=to_pyBytes(input);
            main_namespace["key"]=      to_pyBytes(password2);
            main_namespace["iv"]=       to_pyBytes(input.substr(0, 16));
            try{
                result=std::string(boost::python::extract<std::string>(boost::python::eval("AES.new(key, AES.MODE_CFB, iv).decrypt(toDecrypt)", main_namespace))).substr(16);
                boost::python::exec("toDecrypt='done'\nkey='done'", main_namespace);
            }catch(boost::python::error_already_set const&){
                PyErr_Print();
                return;
            }
        #endif
        if(result.substr(0,3)=="PDB"){
            input=result;
            qDebug()<<i;
            break;
        }
    }
    if(input.substr(0,3)!="PDB"){ ui->codingErrorDisplay->setText("database is corrupted or uses different password (wrong header) [debug]");
        return;
    }
    input=input.substr(3);
    uint16_t sitescount=input[0];
    sitescount<<=8;
    sitescount+=input[1];
    input=input.substr(2);
    QLayoutItem *item;
    while((item=ui->scrollAreaHolder->layout()->takeAt(0))){
        delete item->widget();
        delete item;
    }
    siteButtons.clear();
    SiteButton *newsitebutton=0;
    for(uint16_t i=0; i<sitescount; i++){
        newsitebutton=newSiteButton();
        if(newsitebutton->load(input)){
            ui->codingErrorDisplay->setText("database is corrupted or uses different password ("+QString::number(i)+")");
            while((item=ui->scrollAreaHolder->layout()->takeAt(0))){
                delete item->widget();
                delete item;
            }
            siteButtons.clear();
            return;
        }
        newsitebutton=0;
    }
    hideEverything();
    ui->passwordsFrame->setVisible(1);
}
