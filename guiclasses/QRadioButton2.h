#ifndef QRADIOBUTTON2_H
#define QRADIOBUTTON2_H

#include <QRadioButton>
#include <QMouseEvent>
#include <QString>
#include <QApplication>

class QRadioButton2: public QRadioButton{
    Q_OBJECT

    public:
        explicit QRadioButton2(QWidget *parent=0);
        explicit QRadioButton2(const QString &text, QWidget *parent=0);

        void enterEvent(QEvent *event);

};

#endif //QRADIOBUTTON2_H
