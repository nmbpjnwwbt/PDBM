#include "QRadioButton2.h"
#include <QDebug>

QRadioButton2::QRadioButton2(QWidget *parent): QRadioButton(parent){}
QRadioButton2::QRadioButton2(const QString &text, QWidget *parent): QRadioButton(text,parent){}


void QRadioButton2::enterEvent(QEvent *event __attribute__((unused))){
    if(static_cast<QApplication*>(QApplication::instance())->keyboardModifiers()&Qt::ShiftModifier){
        this->setChecked(1);
    }else
    if(static_cast<QApplication*>(QApplication::instance())->keyboardModifiers()&Qt::ControlModifier){
        this->setChecked(0);
    }
}
