#include "guiclasses/sitebutton.h"
#include <QGridLayout>

SiteButton::SiteButton(QWidget *parent, QString namein, QString descin): QFrame(parent){
    setLayout(new QGridLayout(this));
    name=new QLabel(this);
    description=new QLabel(this);
    name->setStyleSheet("QLabel{font-size:16px;}");
    description->setStyleSheet("QLabel{color: #0099dd; font-size:10px;}");
    static_cast<QGridLayout*>(layout())->addWidget(name,0,0);
    static_cast<QGridLayout*>(layout())->addWidget(description,1,0);
    layout()->setContentsMargins(3,3,3,4);
    layout()->setSpacing(4);
    setText(namein, descin);
}
SiteButton::~SiteButton(){
    for(uint32_t i=0; i<4; i++){

    }
}

void SiteButton::mouseReleaseEvent(QMouseEvent *event){
    QFrame::mouseReleaseEvent(event);
    emit clicked(this);
    return;
}
void SiteButton::setText(QString namein, QString descriptionin){
    name->setText(namein);
    description->setText(descriptionin);
    rawdata[0]=namein.toStdString();
    rawdata[1]=descriptionin.toStdString();
}
void SiteButton::setData(QString loginin, QString passwordin){
    rawdata[2]=loginin.toStdString();
    rawdata[3]=passwordin.toStdString();
}
std::string SiteButton::toSave(){
    std::string output="";
    output+=char(rawdata[0].size()-1);
    output+=rawdata[0];
    output+=char(rawdata[1].size()>>8);
    output+=char(rawdata[1].size());
    output+=rawdata[1];
    output+=char(rawdata[2].size());
    output+=rawdata[2];
    output+=char(rawdata[3].size());
    output+=rawdata[3];
    return output;
}
bool SiteButton::load(std::string &input){
    uint32_t offset[4]={0};
    uint32_t size[4]={0};
    offset[0]=1;
    size[0]=uint8_t(input[0]+1);
    offset[1]=size[0]+1;
    if(input.size()<offset[1]+2) return 1;
    size[1]=uint8_t(input[offset[1]]<<8);
    size[1]+=uint8_t(input[offset[1]+1]);
    if(size[1]>8000) return 1;
    offset[1]+=2;
    offset[2]=offset[1]+size[1];
    if(input.size()<offset[2]+1) return 1;
    size[2]=uint8_t(input[offset[2]]);
    if(size[2]>128) return 1;
    offset[2]++;
    offset[3]=offset[2]+size[2];
    if(input.size()<offset[3]+1) return 1;
    size[3]=uint8_t(input[offset[3]]);
    if(size[3]>128) return 1;
    offset[3]++;
    if(input.size()<offset[3]+size[3]) return 1;
    for(uint8_t i=0; i<4; i++){
        rawdata[i]=input.substr(offset[i],size[i]);
    }
    name->setText(QString::fromStdString(rawdata[0]));
    description->setText(QString::fromStdString(rawdata[1]));
    input.erase(0, size[0]+size[1]+size[2]+size[3]+5);
    return 0;
}
