#ifndef SITEBUTTON_H
#define SITEBUTTON_H
#include <QFrame>
#include <QLabel>
#include <QDebug>

class SiteButton: public QFrame{
    Q_OBJECT

    public:
        explicit SiteButton(QWidget *parent=0, QString namein="name not loaded", QString descin="desc. not loaded");
        ~SiteButton();

        void mouseReleaseEvent(QMouseEvent *event);
        void setText(QString namein="name not loaded", QString descriptionin="desc. not loaded");
        void setData(QString loginin, QString passwordin);
        std::string toSave();
        bool load(std::string &input);

    signals:
        void clicked(SiteButton *button);
    public:

        QLabel *name, *description;
        std::string rawdata[4];
};

#endif // SITEBUTTON_H

