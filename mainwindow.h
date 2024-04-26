#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "defines.h"


#ifdef USE_PYTHON_CRYPTO
    #include <boost/python.hpp>
#elif defined(USE_CRYPTOPP)
    #include "cryptopp_headers/aes.h"
    #include "cryptopp_headers/modes.h"
    #include "cryptopp_headers/osrng.h"
#endif

#include <QMainWindow>
#include <QDir>
#include "guiclasses/QGraphicsScene2.h"
#include "guiclasses/QRadioButton2.h"
#include "guiclasses/sitebutton.h"
#include "guiclasses/filebutton.h"
#include <QMediaPlayer>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QSpacerItem>
#include <QValidator>
#include <vector>

namespace Ui{
    class MainWindow;
}

std::string str_from_hex(std::string in);
std::string str_to_hex(std::string in);


class MainWindow: public QMainWindow{
    Q_OBJECT

    public:
        explicit MainWindow(QWidget *parent=0);
        ~MainWindow();

        std::string dumpData();
        void addPadding(std::string &input);
        void removePadding(std::string &input);
        void prepareFileForDisplay();// make sure to load it to fileContents first

        int on_decryptButton_clicked_decrypt();
        int on_decryptButton_clicked_encrypt();

        std::string path;
    #ifdef USE_PYTHON_CRYPTO
        boost::python::api::object main_module;
        boost::python::api::object main_namespace;
    #endif

    private slots:
        void clearLists();
        void hideEverything();
        void on_actionNewDataBase_triggered();
        void on_actionNewKeyVector_triggered();
        void on_actionOpen_loader_triggered();
        void on_addNewPasswordButton_clicked();
        void on_backToFileListButton_clicked();
        void on_bruter_clicked();
        void on_decryptButton_clicked();
        void on_disableBottomMainWidgetButton_clicked();
        void on_dontAddPasswordButton_clicked();
        void on_generatePasswordButton_clicked();
        void on_headRoller_textEdited(const QString &arg1);
        void on_mainOrientationButton_clicked();
        void on_newRecordButton_clicked();
        void on_openFileButton_clicked();
        void on_refreshButton_clicked();
        void on_repeatPasswordEdit_textChanged(const QString &arg1 __attribute__((unused)));
        void on_saveButton_clicked();
        void on_showLettersCheckBox_toggled(bool checked);
        void siteButton_clicked(SiteButton *button);





    private:
        Ui::MainWindow *ui;
        QDir dir;
        QValidator *ASCIIonlyValidator, *HexaValidator;

        // randomizerFrame==========================
        QRadioButton2 *charRadioButton[95];
        uint32_t randomized=0, looped=0;
        // /randomizerFrame|||||||||||||||||||||||||

        // passwordsFrame===========================
        std::vector<SiteButton*> siteButtons;
        SiteButton *currentSiteButton;
        uint32_t nextSiteId=0;
        SiteButton* newSiteButton();
        // /passwordsFrame||||||||||||||||||||||||||
};

#endif // MAINWINDOW_H
