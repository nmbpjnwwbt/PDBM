#include "guiclasses/filebutton.h"
#include <QGridLayout>

FileButton::FileButton(QWidget *parent, QString pathin): QFrame(parent){
    setLayout(new QGridLayout(this));
    path=new QLabel(this);
    properties=new QLabel(this);
    path->setStyleSheet("QLabel{font-size:16px;}");
    properties->setStyleSheet("QLabel{color: #0099dd; font-size:10px;}");
    static_cast<QGridLayout*>(layout())->addWidget(path,0,0);
    static_cast<QGridLayout*>(layout())->addWidget(properties,1,0);
    layout()->setContentsMargins(3,3,3,4);
    layout()->setSpacing(4);
    path->setText(pathin);
    properties->setText("NOT LOADED");
}

void FileButton::mouseReleaseEvent(QMouseEvent *event){
    QFrame::mouseReleaseEvent(event);
    emit clicked(this);
    return;
}
std::string FileButton::keyToHex(){
    std::string strbuf="";
    uint32_t buf;

    for(uint32_t i=0; i<key.size(); i++){
        buf=((uint32_t(key[i])>>4)&0xf)+'0';
        if(buf>'9')
            buf+=7;
        strbuf+=char(buf);
        buf=(uint32_t(key[i])&0xf)+'0';
        if(buf>'9')
            buf+=7;
        strbuf+=char(buf);
    }
    return strbuf;
}
bool FileButton::load(std::string &input){//todo
    return 0;
}
bool FileButton::hexToKey(std::string hex, QLabel *errlabel){
    if((hex.length()==32)||(hex.length()==48)||(hex.length()==64)){
        for(uint32_t i=0; i<hex.size(); i++){
            if(hex[i]>90)
                hex[i]-=32;
            if(hex[i]>60)
                hex[i]-=7;
            hex[i]-=48;
            if(uint32_t(hex[i])>15){
                if(errlabel)
                    errlabel->setText("forbidden character used (how come? There is a validator)");
                return 1;
            }
            if(i%2)
                hex[i>>1]|=hex[i];
            else
                hex[i>>1]=hex[i]<<4;
        }
        key=hex.substr(0, hex.length()>>1);
        return 0;
    }else{
        if(errlabel){
            if(hex.length())
                errlabel->setText("key can be either 16, 24 or 32 bytes long");
            else
                errlabel->setText("this is not supposed to be in plain text, fill the key field");
        }
        return 1;
    }
}
bool FileButton::validityCheck(bool loadProperties){
    setStyleSheet("#"+objectName()+"{ border-style: outset; }");
    properties->setStyleSheet("QLabel{color: #0099dd; font-size:10px;}");
    properties->setText("");
    if(path->text().toStdString().size()==0){
        setStyleSheet("#"+objectName()+"{ border-style: outset;}\n QFrame{ background-color: #770000; }");
        properties->setStyleSheet("QLabel{color: #001122; font-size:10px;}");
        properties->setText("path is empty");
    }

    if(loadProperties){
    }
}
