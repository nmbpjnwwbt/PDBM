#ifndef FILEBUTTON_H
#define FILEBUTTON_H
#include <QFrame>
#include <QLabel>
#include <QDebug>

class FileButton: public QFrame{
    Q_OBJECT

    public:
        explicit FileButton(QWidget *parent=0, QString pathin="");

        void mouseReleaseEvent(QMouseEvent *event);
        std::string keyToHex();
        std::string toSave();
        bool load(std::string &input);
        bool hexToKey(std::string hex, QLabel *errlabel);
        bool validityCheck(bool loadProperties=0);


    signals:
        void clicked(FileButton *button);
    public:

        QLabel *path, *properties;
        std::string key, description;
};

#endif // FILEBUTTON_H
