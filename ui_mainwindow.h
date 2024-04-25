/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QVideoWidget>
#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_loader;
    QAction *actionNewDataBase;
    QAction *actionNewKeyVector;
    QWidget *centralWidget;
    QGridLayout *gridLayout_8;
    QSplitter *mainSplitter;
    QWidget *upperMainWidget;
    QGridLayout *gridLayout;
    QFrame *decryptFrame;
    QGridLayout *gridLayout_3;
    QLabel *codingErrorDisplay;
    QCheckBox *showLettersCheckBox;
    QHBoxLayout *repeatPasswordLayout;
    QLabel *repeatPasswordLabel;
    QLineEdit *repeatPasswordEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *passwordEdit;
    QHBoxLayout *savingFilenameLayout;
    QLabel *filenameLabel1;
    QLineEdit *filenameEdit;
    QPushButton *decryptButton;
    QPushButton *bruter;
    QSpacerItem *verticalSpacer;
    QPushButton *backToFileListButton;
    QRadioButton *passwordsMatchDot;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *dontClearPasswordBox;
    QCheckBox *CFB8CheckBox;
    QFrame *loadingFrame;
    QGridLayout *gridLayout_2;
    QPushButton *refreshButton;
    QPushButton *openFileButton;
    QListWidget *dbList;
    QFrame *randomizerFrame;
    QGridLayout *gridLayout_5;
    QPushButton *dontAddPasswordButton;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *loginLineEdit;
    QPushButton *addNewPasswordButton;
    QSpinBox *passwordLengthBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *passwordLineEdit;
    QSpacerItem *verticalSpacer_3;
    QScrollArea *scrollArea;
    QWidget *possibleCharsScroll;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *descriptionLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *domainLineEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *headRoller_label;
    QLineEdit *headRoller;
    QLabel *headRoller_label_1;
    QLabel *rollCounter;
    QPushButton *generatePasswordButton;
    QCheckBox *useRollerGenerator;
    QFrame *passwordsFrame;
    QGridLayout *gridLayout_4;
    QPushButton *saveButton;
    QLabel *filenameDLabel;
    QPushButton *newRecordButton;
    QLabel *label_6;
    QScrollArea *scrollSites;
    QWidget *scrollAreaHolder;
    QVBoxLayout *verticalLayout;
    QFrame *filesFrame;
    QGridLayout *gridLayout_7;
    QPushButton *newEncryptedFileButton;
    QLabel *filenameKLabel;
    QPushButton *saveKeyVectorButton;
    QLabel *label_7;
    QScrollArea *scrollFiles;
    QWidget *scrollFilesHolder;
    QVBoxLayout *verticalLayout_2;
    QFrame *fileEditFrame;
    QGridLayout *gridLayout_11;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *pathLineEdit;
    QPushButton *dontAddFileButton;
    QLabel *headRoller_label_4;
    QCheckBox *useRollerGenerator_2;
    QPushButton *encryptFileButton;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_10;
    QLineEdit *fileDescLineEdit;
    QSpacerItem *verticalSpacer_2;
    QPushButton *generateKeyButton;
    QSpinBox *keyLengthBox;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QLineEdit *keyLineEdit;
    QLabel *rollCounter_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *headRoller_label_3;
    QLineEdit *headRoller_3;
    QLabel *fileErrorLabel;
    QPushButton *reloadFileButton;
    QPushButton *overwriteCurrentFileButton;
    QWidget *bottomMainWidget;
    QGridLayout *gridLayout_9;
    QPushButton *disableBottomMainWidgetButton;
    QPushButton *mainOrientationButton;
    QSpacerItem *horizontalSpacer;
    QSplitter *viewEditorSplitter;
    QPlainTextEdit *plainTextEdit;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_10;
    QGraphicsView *graphicsView;
    QVideoWidget *videoWidget;
    QMenuBar *menuBar;
    QMenu *menuFiles;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(998, 542);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #202020;\n"
"color: #00ff00;"));
        MainWindow->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        actionOpen_loader = new QAction(MainWindow);
        actionOpen_loader->setObjectName(QString::fromUtf8("actionOpen_loader"));
        actionNewDataBase = new QAction(MainWindow);
        actionNewDataBase->setObjectName(QString::fromUtf8("actionNewDataBase"));
        actionNewKeyVector = new QAction(MainWindow);
        actionNewKeyVector->setObjectName(QString::fromUtf8("actionNewKeyVector"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-size:11px\n"
"}\n"
"QPushButton{\n"
"	background-color: #282828;\n"
"}\n"
"QLineEdit {\n"
"	color: #00ff00;\n"
"	selection-color: #00ff00;\n"
"	background-color: #282828;\n"
"	selection-background-color: #000000;\n"
"	border: 0;\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"	color: #00ff00;\n"
"	selection-color: #00ff00;\n"
"	background-color: #323232;\n"
"	selection-background-color: #000000;\n"
"	border: 0;\n"
"}\n"
"\n"
"QRadioButton::indicator{\n"
"	width: 14px;\n"
"    height: 14px;\n"
"}\n"
"QRadioButton::indicator::unchecked{\n"
"	image: url(:/img/img/radbutoff.png);\n"
"}\n"
"QRadioButton::indicator::checked{\n"
"	image: url(:/img/img/radbuton.png);\n"
"}\n"
"QRadioButton::unchecked{\n"
"	color: #009900;\n"
"}\n"
"QRadioButton::checked{\n"
"	color: #00ff00;\n"
"}\n"
"\n"
"QAbstractScrollArea{\n"
"	background-color: #323232;\n"
"}\n"
"\n"
"QSplitter{\n"
"	background-color: #006622;\n"
"}"));
        gridLayout_8 = new QGridLayout(centralWidget);
        gridLayout_8->setSpacing(2);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        mainSplitter = new QSplitter(centralWidget);
        mainSplitter->setObjectName(QString::fromUtf8("mainSplitter"));
        mainSplitter->setFrameShape(QFrame::NoFrame);
        mainSplitter->setFrameShadow(QFrame::Plain);
        mainSplitter->setOrientation(Qt::Vertical);
        mainSplitter->setHandleWidth(4);
        upperMainWidget = new QWidget(mainSplitter);
        upperMainWidget->setObjectName(QString::fromUtf8("upperMainWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(upperMainWidget->sizePolicy().hasHeightForWidth());
        upperMainWidget->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(upperMainWidget);
        gridLayout->setSpacing(2);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        decryptFrame = new QFrame(upperMainWidget);
        decryptFrame->setObjectName(QString::fromUtf8("decryptFrame"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(decryptFrame->sizePolicy().hasHeightForWidth());
        decryptFrame->setSizePolicy(sizePolicy2);
        decryptFrame->setFrameShape(QFrame::StyledPanel);
        decryptFrame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(decryptFrame);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        codingErrorDisplay = new QLabel(decryptFrame);
        codingErrorDisplay->setObjectName(QString::fromUtf8("codingErrorDisplay"));
        codingErrorDisplay->setStyleSheet(QString::fromUtf8("color: #ff0000;"));

        gridLayout_3->addWidget(codingErrorDisplay, 0, 3, 1, 1);

        showLettersCheckBox = new QCheckBox(decryptFrame);
        showLettersCheckBox->setObjectName(QString::fromUtf8("showLettersCheckBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(showLettersCheckBox->sizePolicy().hasHeightForWidth());
        showLettersCheckBox->setSizePolicy(sizePolicy3);
        showLettersCheckBox->setMaximumSize(QSize(220, 16777215));

        gridLayout_3->addWidget(showLettersCheckBox, 0, 2, 1, 1);

        repeatPasswordLayout = new QHBoxLayout();
        repeatPasswordLayout->setSpacing(6);
        repeatPasswordLayout->setObjectName(QString::fromUtf8("repeatPasswordLayout"));
        repeatPasswordLabel = new QLabel(decryptFrame);
        repeatPasswordLabel->setObjectName(QString::fromUtf8("repeatPasswordLabel"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(repeatPasswordLabel->sizePolicy().hasHeightForWidth());
        repeatPasswordLabel->setSizePolicy(sizePolicy4);
        repeatPasswordLabel->setMaximumSize(QSize(50, 16777215));

        repeatPasswordLayout->addWidget(repeatPasswordLabel);

        repeatPasswordEdit = new QLineEdit(decryptFrame);
        repeatPasswordEdit->setObjectName(QString::fromUtf8("repeatPasswordEdit"));
        QSizePolicy sizePolicy5(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(repeatPasswordEdit->sizePolicy().hasHeightForWidth());
        repeatPasswordEdit->setSizePolicy(sizePolicy5);
        repeatPasswordEdit->setStyleSheet(QString::fromUtf8(""));
        repeatPasswordEdit->setMaxLength(64);
        repeatPasswordEdit->setEchoMode(QLineEdit::Password);

        repeatPasswordLayout->addWidget(repeatPasswordEdit);


        gridLayout_3->addLayout(repeatPasswordLayout, 2, 0, 1, 4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(decryptFrame);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy4.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy4);
        label->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(label);

        passwordEdit = new QLineEdit(decryptFrame);
        passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));
        sizePolicy5.setHeightForWidth(passwordEdit->sizePolicy().hasHeightForWidth());
        passwordEdit->setSizePolicy(sizePolicy5);
        passwordEdit->setStyleSheet(QString::fromUtf8(""));
        passwordEdit->setMaxLength(64);
        passwordEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(passwordEdit);


        gridLayout_3->addLayout(horizontalLayout, 1, 0, 1, 4);

        savingFilenameLayout = new QHBoxLayout();
        savingFilenameLayout->setSpacing(6);
        savingFilenameLayout->setObjectName(QString::fromUtf8("savingFilenameLayout"));
        filenameLabel1 = new QLabel(decryptFrame);
        filenameLabel1->setObjectName(QString::fromUtf8("filenameLabel1"));
        sizePolicy4.setHeightForWidth(filenameLabel1->sizePolicy().hasHeightForWidth());
        filenameLabel1->setSizePolicy(sizePolicy4);
        filenameLabel1->setMaximumSize(QSize(50, 16777215));

        savingFilenameLayout->addWidget(filenameLabel1);

        filenameEdit = new QLineEdit(decryptFrame);
        filenameEdit->setObjectName(QString::fromUtf8("filenameEdit"));
        sizePolicy5.setHeightForWidth(filenameEdit->sizePolicy().hasHeightForWidth());
        filenameEdit->setSizePolicy(sizePolicy5);
        filenameEdit->setStyleSheet(QString::fromUtf8(""));
        filenameEdit->setEchoMode(QLineEdit::Normal);

        savingFilenameLayout->addWidget(filenameEdit);


        gridLayout_3->addLayout(savingFilenameLayout, 3, 0, 1, 4);

        decryptButton = new QPushButton(decryptFrame);
        decryptButton->setObjectName(QString::fromUtf8("decryptButton"));
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(decryptButton->sizePolicy().hasHeightForWidth());
        decryptButton->setSizePolicy(sizePolicy6);
        decryptButton->setAutoDefault(true);

        gridLayout_3->addWidget(decryptButton, 0, 0, 1, 1);

        bruter = new QPushButton(decryptFrame);
        bruter->setObjectName(QString::fromUtf8("bruter"));
        bruter->setAutoDefault(true);

        gridLayout_3->addWidget(bruter, 6, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 7, 0, 1, 4);

        backToFileListButton = new QPushButton(decryptFrame);
        backToFileListButton->setObjectName(QString::fromUtf8("backToFileListButton"));
        backToFileListButton->setMinimumSize(QSize(20, 20));
        backToFileListButton->setMaximumSize(QSize(20, 20));
        backToFileListButton->setStyleSheet(QString::fromUtf8("background-image: url(: img/img/undo.png);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        backToFileListButton->setIcon(icon);
        backToFileListButton->setAutoDefault(true);

        gridLayout_3->addWidget(backToFileListButton, 0, 1, 1, 1);

        passwordsMatchDot = new QRadioButton(decryptFrame);
        passwordsMatchDot->setObjectName(QString::fromUtf8("passwordsMatchDot"));
        passwordsMatchDot->setEnabled(false);
        sizePolicy5.setHeightForWidth(passwordsMatchDot->sizePolicy().hasHeightForWidth());
        passwordsMatchDot->setSizePolicy(sizePolicy5);
        passwordsMatchDot->setFocusPolicy(Qt::NoFocus);
        passwordsMatchDot->setStyleSheet(QString::fromUtf8("QRadioButton::unchecked{\n"
"	color: #ff0000;\n"
"}"));
        passwordsMatchDot->setCheckable(true);
        passwordsMatchDot->setChecked(true);
        passwordsMatchDot->setAutoExclusive(false);

        gridLayout_3->addWidget(passwordsMatchDot, 4, 3, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));

        gridLayout_3->addLayout(verticalLayout_4, 5, 3, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        dontClearPasswordBox = new QCheckBox(decryptFrame);
        dontClearPasswordBox->setObjectName(QString::fromUtf8("dontClearPasswordBox"));

        verticalLayout_3->addWidget(dontClearPasswordBox);

        CFB8CheckBox = new QCheckBox(decryptFrame);
        CFB8CheckBox->setObjectName(QString::fromUtf8("CFB8CheckBox"));
        CFB8CheckBox->setFocusPolicy(Qt::StrongFocus);

        verticalLayout_3->addWidget(CFB8CheckBox);


        gridLayout_3->addLayout(verticalLayout_3, 4, 0, 2, 3);


        gridLayout->addWidget(decryptFrame, 0, 3, 1, 1);

        loadingFrame = new QFrame(upperMainWidget);
        loadingFrame->setObjectName(QString::fromUtf8("loadingFrame"));
        sizePolicy2.setHeightForWidth(loadingFrame->sizePolicy().hasHeightForWidth());
        loadingFrame->setSizePolicy(sizePolicy2);
        loadingFrame->setStyleSheet(QString::fromUtf8(""));
        loadingFrame->setFrameShape(QFrame::StyledPanel);
        loadingFrame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(loadingFrame);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        refreshButton = new QPushButton(loadingFrame);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));
        sizePolicy3.setHeightForWidth(refreshButton->sizePolicy().hasHeightForWidth());
        refreshButton->setSizePolicy(sizePolicy3);
        refreshButton->setAutoDefault(true);
        refreshButton->setFlat(false);

        gridLayout_2->addWidget(refreshButton, 0, 0, 1, 1);

        openFileButton = new QPushButton(loadingFrame);
        openFileButton->setObjectName(QString::fromUtf8("openFileButton"));
        sizePolicy3.setHeightForWidth(openFileButton->sizePolicy().hasHeightForWidth());
        openFileButton->setSizePolicy(sizePolicy3);
        openFileButton->setAutoDefault(true);

        gridLayout_2->addWidget(openFileButton, 0, 1, 1, 1);

        dbList = new QListWidget(loadingFrame);
        dbList->setObjectName(QString::fromUtf8("dbList"));
        QSizePolicy sizePolicy7(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(dbList->sizePolicy().hasHeightForWidth());
        dbList->setSizePolicy(sizePolicy7);
        dbList->setStyleSheet(QString::fromUtf8("background-color: #282828;"));
        dbList->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);

        gridLayout_2->addWidget(dbList, 1, 0, 1, 2);


        gridLayout->addWidget(loadingFrame, 0, 0, 1, 1);

        randomizerFrame = new QFrame(upperMainWidget);
        randomizerFrame->setObjectName(QString::fromUtf8("randomizerFrame"));
        QSizePolicy sizePolicy8(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(randomizerFrame->sizePolicy().hasHeightForWidth());
        randomizerFrame->setSizePolicy(sizePolicy8);
        randomizerFrame->setLayoutDirection(Qt::LeftToRight);
        randomizerFrame->setFrameShape(QFrame::StyledPanel);
        randomizerFrame->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(randomizerFrame);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        dontAddPasswordButton = new QPushButton(randomizerFrame);
        dontAddPasswordButton->setObjectName(QString::fromUtf8("dontAddPasswordButton"));
        QSizePolicy sizePolicy9(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(dontAddPasswordButton->sizePolicy().hasHeightForWidth());
        dontAddPasswordButton->setSizePolicy(sizePolicy9);
        dontAddPasswordButton->setMinimumSize(QSize(20, 20));
        dontAddPasswordButton->setMaximumSize(QSize(20, 20));
        dontAddPasswordButton->setLayoutDirection(Qt::LeftToRight);
        dontAddPasswordButton->setIcon(icon);
        dontAddPasswordButton->setAutoDefault(true);

        gridLayout_5->addWidget(dontAddPasswordButton, 2, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(3);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(randomizerFrame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy10(QSizePolicy::Ignored, QSizePolicy::Minimum);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy10);
        label_5->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_5->addWidget(label_5);

        loginLineEdit = new QLineEdit(randomizerFrame);
        loginLineEdit->setObjectName(QString::fromUtf8("loginLineEdit"));
        loginLineEdit->setEnabled(true);
        sizePolicy5.setHeightForWidth(loginLineEdit->sizePolicy().hasHeightForWidth());
        loginLineEdit->setSizePolicy(sizePolicy5);
        loginLineEdit->setStyleSheet(QString::fromUtf8(""));
        loginLineEdit->setMaxLength(128);
        loginLineEdit->setEchoMode(QLineEdit::Normal);

        horizontalLayout_5->addWidget(loginLineEdit);


        gridLayout_5->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        addNewPasswordButton = new QPushButton(randomizerFrame);
        addNewPasswordButton->setObjectName(QString::fromUtf8("addNewPasswordButton"));
        sizePolicy9.setHeightForWidth(addNewPasswordButton->sizePolicy().hasHeightForWidth());
        addNewPasswordButton->setSizePolicy(sizePolicy9);
        addNewPasswordButton->setMaximumSize(QSize(16777215, 20));
        addNewPasswordButton->setAutoDefault(true);

        gridLayout_5->addWidget(addNewPasswordButton, 2, 2, 1, 1);

        passwordLengthBox = new QSpinBox(randomizerFrame);
        passwordLengthBox->setObjectName(QString::fromUtf8("passwordLengthBox"));
        passwordLengthBox->setMinimum(4);
        passwordLengthBox->setMaximum(128);

        gridLayout_5->addWidget(passwordLengthBox, 3, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(randomizerFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy10.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy10);
        label_4->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_4->addWidget(label_4);

        passwordLineEdit = new QLineEdit(randomizerFrame);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setEnabled(true);
        sizePolicy5.setHeightForWidth(passwordLineEdit->sizePolicy().hasHeightForWidth());
        passwordLineEdit->setSizePolicy(sizePolicy5);
        passwordLineEdit->setStyleSheet(QString::fromUtf8(""));
        passwordLineEdit->setMaxLength(128);
        passwordLineEdit->setEchoMode(QLineEdit::Normal);

        horizontalLayout_4->addWidget(passwordLineEdit);


        gridLayout_5->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout_5->addItem(verticalSpacer_3, 7, 0, 1, 1);

        scrollArea = new QScrollArea(randomizerFrame);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy11(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy11);
        scrollArea->setStyleSheet(QString::fromUtf8("QAbstractScrollArea{\n"
"	background-color: #202020;\n"
"}"));
        scrollArea->setFrameShape(QFrame::StyledPanel);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        possibleCharsScroll = new QWidget();
        possibleCharsScroll->setObjectName(QString::fromUtf8("possibleCharsScroll"));
        possibleCharsScroll->setGeometry(QRect(0, 0, 143, 69));
        QSizePolicy sizePolicy12(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy12.setHorizontalStretch(0);
        sizePolicy12.setVerticalStretch(0);
        sizePolicy12.setHeightForWidth(possibleCharsScroll->sizePolicy().hasHeightForWidth());
        possibleCharsScroll->setSizePolicy(sizePolicy12);
        gridLayout_6 = new QGridLayout(possibleCharsScroll);
        gridLayout_6->setSpacing(2);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setSizeConstraint(QLayout::SetMinAndMaxSize);
        gridLayout_6->setContentsMargins(2, 2, 2, 2);
        scrollArea->setWidget(possibleCharsScroll);

        gridLayout_5->addWidget(scrollArea, 4, 0, 1, 3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(randomizerFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy10.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy10);
        label_3->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_3->addWidget(label_3);

        descriptionLineEdit = new QLineEdit(randomizerFrame);
        descriptionLineEdit->setObjectName(QString::fromUtf8("descriptionLineEdit"));
        descriptionLineEdit->setEnabled(true);
        sizePolicy5.setHeightForWidth(descriptionLineEdit->sizePolicy().hasHeightForWidth());
        descriptionLineEdit->setSizePolicy(sizePolicy5);
        descriptionLineEdit->setStyleSheet(QString::fromUtf8(""));
        descriptionLineEdit->setMaxLength(8000);
        descriptionLineEdit->setEchoMode(QLineEdit::Normal);

        horizontalLayout_3->addWidget(descriptionLineEdit);


        gridLayout_5->addLayout(horizontalLayout_3, 1, 0, 1, 3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(randomizerFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy4.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy4);
        label_2->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_2->addWidget(label_2);

        domainLineEdit = new QLineEdit(randomizerFrame);
        domainLineEdit->setObjectName(QString::fromUtf8("domainLineEdit"));
        domainLineEdit->setEnabled(true);
        sizePolicy5.setHeightForWidth(domainLineEdit->sizePolicy().hasHeightForWidth());
        domainLineEdit->setSizePolicy(sizePolicy5);
        domainLineEdit->setMaxLength(256);
        domainLineEdit->setEchoMode(QLineEdit::Normal);
        domainLineEdit->setClearButtonEnabled(false);

        horizontalLayout_2->addWidget(domainLineEdit);


        gridLayout_5->addLayout(horizontalLayout_2, 0, 0, 1, 3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(3);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        headRoller_label = new QLabel(randomizerFrame);
        headRoller_label->setObjectName(QString::fromUtf8("headRoller_label"));
        QSizePolicy sizePolicy13(QSizePolicy::Ignored, QSizePolicy::Minimum);
        sizePolicy13.setHorizontalStretch(1);
        sizePolicy13.setVerticalStretch(0);
        sizePolicy13.setHeightForWidth(headRoller_label->sizePolicy().hasHeightForWidth());
        headRoller_label->setSizePolicy(sizePolicy13);
        headRoller_label->setMaximumSize(QSize(308, 16777215));

        horizontalLayout_6->addWidget(headRoller_label);

        headRoller = new QLineEdit(randomizerFrame);
        headRoller->setObjectName(QString::fromUtf8("headRoller"));
        headRoller->setEnabled(true);
        sizePolicy3.setHeightForWidth(headRoller->sizePolicy().hasHeightForWidth());
        headRoller->setSizePolicy(sizePolicy3);
        headRoller->setStyleSheet(QString::fromUtf8(""));
        headRoller->setMaxLength(64);
        headRoller->setEchoMode(QLineEdit::Normal);

        horizontalLayout_6->addWidget(headRoller);


        gridLayout_5->addLayout(horizontalLayout_6, 5, 0, 1, 1);

        headRoller_label_1 = new QLabel(randomizerFrame);
        headRoller_label_1->setObjectName(QString::fromUtf8("headRoller_label_1"));

        gridLayout_5->addWidget(headRoller_label_1, 5, 2, 1, 1);

        rollCounter = new QLabel(randomizerFrame);
        rollCounter->setObjectName(QString::fromUtf8("rollCounter"));
        sizePolicy8.setHeightForWidth(rollCounter->sizePolicy().hasHeightForWidth());
        rollCounter->setSizePolicy(sizePolicy8);

        gridLayout_5->addWidget(rollCounter, 5, 1, 1, 1);

        generatePasswordButton = new QPushButton(randomizerFrame);
        generatePasswordButton->setObjectName(QString::fromUtf8("generatePasswordButton"));
        sizePolicy9.setHeightForWidth(generatePasswordButton->sizePolicy().hasHeightForWidth());
        generatePasswordButton->setSizePolicy(sizePolicy9);
        generatePasswordButton->setMaximumSize(QSize(16777215, 20));
        generatePasswordButton->setAutoDefault(true);

        gridLayout_5->addWidget(generatePasswordButton, 3, 2, 1, 1);

        useRollerGenerator = new QCheckBox(randomizerFrame);
        useRollerGenerator->setObjectName(QString::fromUtf8("useRollerGenerator"));

        gridLayout_5->addWidget(useRollerGenerator, 6, 0, 1, 1);

        scrollArea->raise();
        generatePasswordButton->raise();
        addNewPasswordButton->raise();
        passwordLengthBox->raise();
        dontAddPasswordButton->raise();
        headRoller_label_1->raise();
        rollCounter->raise();
        useRollerGenerator->raise();

        gridLayout->addWidget(randomizerFrame, 0, 2, 1, 1);

        passwordsFrame = new QFrame(upperMainWidget);
        passwordsFrame->setObjectName(QString::fromUtf8("passwordsFrame"));
        sizePolicy8.setHeightForWidth(passwordsFrame->sizePolicy().hasHeightForWidth());
        passwordsFrame->setSizePolicy(sizePolicy8);
        passwordsFrame->setStyleSheet(QString::fromUtf8(""));
        passwordsFrame->setFrameShape(QFrame::StyledPanel);
        passwordsFrame->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(passwordsFrame);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(5, 6, 3, 3);
        saveButton = new QPushButton(passwordsFrame);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        QSizePolicy sizePolicy14(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy14.setHorizontalStretch(0);
        sizePolicy14.setVerticalStretch(0);
        sizePolicy14.setHeightForWidth(saveButton->sizePolicy().hasHeightForWidth());
        saveButton->setSizePolicy(sizePolicy14);
        saveButton->setAutoDefault(true);

        gridLayout_4->addWidget(saveButton, 0, 2, 1, 1);

        filenameDLabel = new QLabel(passwordsFrame);
        filenameDLabel->setObjectName(QString::fromUtf8("filenameDLabel"));
        QSizePolicy sizePolicy15(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy15.setHorizontalStretch(0);
        sizePolicy15.setVerticalStretch(0);
        sizePolicy15.setHeightForWidth(filenameDLabel->sizePolicy().hasHeightForWidth());
        filenameDLabel->setSizePolicy(sizePolicy15);

        gridLayout_4->addWidget(filenameDLabel, 0, 1, 1, 1);

        newRecordButton = new QPushButton(passwordsFrame);
        newRecordButton->setObjectName(QString::fromUtf8("newRecordButton"));
        sizePolicy3.setHeightForWidth(newRecordButton->sizePolicy().hasHeightForWidth());
        newRecordButton->setSizePolicy(sizePolicy3);
        newRecordButton->setMinimumSize(QSize(20, 20));
        newRecordButton->setMaximumSize(QSize(20, 20));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        newRecordButton->setIcon(icon1);
        newRecordButton->setAutoDefault(true);

        gridLayout_4->addWidget(newRecordButton, 0, 0, 1, 1);

        label_6 = new QLabel(passwordsFrame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(label_6, 0, 3, 1, 1);

        scrollSites = new QScrollArea(passwordsFrame);
        scrollSites->setObjectName(QString::fromUtf8("scrollSites"));
        scrollSites->setContextMenuPolicy(Qt::PreventContextMenu);
        scrollSites->setStyleSheet(QString::fromUtf8("\n"
"QWidget#scrollAreaHolder{\n"
"background-color: transparent;\n"
"}"));
        scrollSites->setWidgetResizable(true);
        scrollSites->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaHolder = new QWidget();
        scrollAreaHolder->setObjectName(QString::fromUtf8("scrollAreaHolder"));
        scrollAreaHolder->setGeometry(QRect(0, 0, 152, 16));
        QSizePolicy sizePolicy16(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy16.setHorizontalStretch(0);
        sizePolicy16.setVerticalStretch(0);
        sizePolicy16.setHeightForWidth(scrollAreaHolder->sizePolicy().hasHeightForWidth());
        scrollAreaHolder->setSizePolicy(sizePolicy16);
        scrollAreaHolder->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	border-width: 3px;\n"
"	border-color: #003210;\n"
"}"));
        verticalLayout = new QVBoxLayout(scrollAreaHolder);
        verticalLayout->setSpacing(4);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        scrollSites->setWidget(scrollAreaHolder);

        gridLayout_4->addWidget(scrollSites, 1, 0, 1, 4);


        gridLayout->addWidget(passwordsFrame, 0, 1, 1, 1);

        filesFrame = new QFrame(upperMainWidget);
        filesFrame->setObjectName(QString::fromUtf8("filesFrame"));
        sizePolicy2.setHeightForWidth(filesFrame->sizePolicy().hasHeightForWidth());
        filesFrame->setSizePolicy(sizePolicy2);
        filesFrame->setStyleSheet(QString::fromUtf8("QScrollArea{\n"
"background-color:#002d20;\n"
"}"));
        filesFrame->setFrameShape(QFrame::StyledPanel);
        filesFrame->setFrameShadow(QFrame::Raised);
        gridLayout_7 = new QGridLayout(filesFrame);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(5, 6, 3, 3);
        newEncryptedFileButton = new QPushButton(filesFrame);
        newEncryptedFileButton->setObjectName(QString::fromUtf8("newEncryptedFileButton"));
        newEncryptedFileButton->setMinimumSize(QSize(20, 20));
        newEncryptedFileButton->setMaximumSize(QSize(20, 20));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("img/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        newEncryptedFileButton->setIcon(icon2);
        newEncryptedFileButton->setAutoDefault(true);

        gridLayout_7->addWidget(newEncryptedFileButton, 0, 0, 1, 1);

        filenameKLabel = new QLabel(filesFrame);
        filenameKLabel->setObjectName(QString::fromUtf8("filenameKLabel"));
        sizePolicy15.setHeightForWidth(filenameKLabel->sizePolicy().hasHeightForWidth());
        filenameKLabel->setSizePolicy(sizePolicy15);

        gridLayout_7->addWidget(filenameKLabel, 0, 1, 1, 1);

        saveKeyVectorButton = new QPushButton(filesFrame);
        saveKeyVectorButton->setObjectName(QString::fromUtf8("saveKeyVectorButton"));
        sizePolicy14.setHeightForWidth(saveKeyVectorButton->sizePolicy().hasHeightForWidth());
        saveKeyVectorButton->setSizePolicy(sizePolicy14);
        saveKeyVectorButton->setAutoDefault(true);

        gridLayout_7->addWidget(saveKeyVectorButton, 0, 2, 1, 1);

        label_7 = new QLabel(filesFrame);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_7->addWidget(label_7, 0, 3, 1, 1);

        scrollFiles = new QScrollArea(filesFrame);
        scrollFiles->setObjectName(QString::fromUtf8("scrollFiles"));
        scrollFiles->setStyleSheet(QString::fromUtf8("QWidget#scrollFilesHolder{\n"
"background-color: transparent;\n"
"}"));
        scrollFiles->setWidgetResizable(true);
        scrollFilesHolder = new QWidget();
        scrollFilesHolder->setObjectName(QString::fromUtf8("scrollFilesHolder"));
        scrollFilesHolder->setGeometry(QRect(0, 0, 152, 16));
        sizePolicy16.setHeightForWidth(scrollFilesHolder->sizePolicy().hasHeightForWidth());
        scrollFilesHolder->setSizePolicy(sizePolicy16);
        scrollFilesHolder->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	border-width: 3px;\n"
"	border-color: #003210;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(scrollFilesHolder);
        verticalLayout_2->setSpacing(4);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(3, 3, 3, 3);
        scrollFiles->setWidget(scrollFilesHolder);

        gridLayout_7->addWidget(scrollFiles, 1, 0, 1, 4);


        gridLayout->addWidget(filesFrame, 0, 4, 1, 1);

        fileEditFrame = new QFrame(upperMainWidget);
        fileEditFrame->setObjectName(QString::fromUtf8("fileEditFrame"));
        sizePolicy2.setHeightForWidth(fileEditFrame->sizePolicy().hasHeightForWidth());
        fileEditFrame->setSizePolicy(sizePolicy2);
        fileEditFrame->setFrameShape(QFrame::StyledPanel);
        fileEditFrame->setFrameShadow(QFrame::Raised);
        gridLayout_11 = new QGridLayout(fileEditFrame);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(3);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_8 = new QLabel(fileEditFrame);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_7->addWidget(label_8);

        pathLineEdit = new QLineEdit(fileEditFrame);
        pathLineEdit->setObjectName(QString::fromUtf8("pathLineEdit"));

        horizontalLayout_7->addWidget(pathLineEdit);


        gridLayout_11->addLayout(horizontalLayout_7, 1, 0, 1, 10);

        dontAddFileButton = new QPushButton(fileEditFrame);
        dontAddFileButton->setObjectName(QString::fromUtf8("dontAddFileButton"));
        sizePolicy9.setHeightForWidth(dontAddFileButton->sizePolicy().hasHeightForWidth());
        dontAddFileButton->setSizePolicy(sizePolicy9);
        dontAddFileButton->setMinimumSize(QSize(20, 20));
        dontAddFileButton->setMaximumSize(QSize(20, 20));
        dontAddFileButton->setLayoutDirection(Qt::LeftToRight);
        dontAddFileButton->setIcon(icon);
        dontAddFileButton->setAutoDefault(true);

        gridLayout_11->addWidget(dontAddFileButton, 0, 0, 1, 1);

        headRoller_label_4 = new QLabel(fileEditFrame);
        headRoller_label_4->setObjectName(QString::fromUtf8("headRoller_label_4"));

        gridLayout_11->addWidget(headRoller_label_4, 4, 9, 1, 1);

        useRollerGenerator_2 = new QCheckBox(fileEditFrame);
        useRollerGenerator_2->setObjectName(QString::fromUtf8("useRollerGenerator_2"));

        gridLayout_11->addWidget(useRollerGenerator_2, 5, 0, 1, 6);

        encryptFileButton = new QPushButton(fileEditFrame);
        encryptFileButton->setObjectName(QString::fromUtf8("encryptFileButton"));
        sizePolicy9.setHeightForWidth(encryptFileButton->sizePolicy().hasHeightForWidth());
        encryptFileButton->setSizePolicy(sizePolicy9);
        encryptFileButton->setMaximumSize(QSize(16777215, 20));
        encryptFileButton->setAutoDefault(true);

        gridLayout_11->addWidget(encryptFileButton, 0, 1, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(3);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_10 = new QLabel(fileEditFrame);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_9->addWidget(label_10);

        fileDescLineEdit = new QLineEdit(fileEditFrame);
        fileDescLineEdit->setObjectName(QString::fromUtf8("fileDescLineEdit"));

        horizontalLayout_9->addWidget(fileDescLineEdit);


        gridLayout_11->addLayout(horizontalLayout_9, 2, 0, 1, 10);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout_11->addItem(verticalSpacer_2, 7, 0, 1, 5);

        generateKeyButton = new QPushButton(fileEditFrame);
        generateKeyButton->setObjectName(QString::fromUtf8("generateKeyButton"));
        sizePolicy9.setHeightForWidth(generateKeyButton->sizePolicy().hasHeightForWidth());
        generateKeyButton->setSizePolicy(sizePolicy9);
        generateKeyButton->setMaximumSize(QSize(16777215, 20));
        generateKeyButton->setAutoDefault(true);

        gridLayout_11->addWidget(generateKeyButton, 3, 9, 1, 1);

        keyLengthBox = new QSpinBox(fileEditFrame);
        keyLengthBox->setObjectName(QString::fromUtf8("keyLengthBox"));
        keyLengthBox->setEnabled(true);
        sizePolicy9.setHeightForWidth(keyLengthBox->sizePolicy().hasHeightForWidth());
        keyLengthBox->setSizePolicy(sizePolicy9);
        keyLengthBox->setInputMethodHints(Qt::ImhDigitsOnly);
        keyLengthBox->setWrapping(false);
        keyLengthBox->setFrame(true);
        keyLengthBox->setReadOnly(false);
        keyLengthBox->setKeyboardTracking(false);
        keyLengthBox->setMinimum(32);
        keyLengthBox->setMaximum(64);
        keyLengthBox->setSingleStep(16);

        gridLayout_11->addWidget(keyLengthBox, 3, 8, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(3);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_9 = new QLabel(fileEditFrame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QSizePolicy sizePolicy17(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy17.setHorizontalStretch(0);
        sizePolicy17.setVerticalStretch(0);
        sizePolicy17.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy17);

        horizontalLayout_8->addWidget(label_9);

        keyLineEdit = new QLineEdit(fileEditFrame);
        keyLineEdit->setObjectName(QString::fromUtf8("keyLineEdit"));
        QSizePolicy sizePolicy18(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy18.setHorizontalStretch(0);
        sizePolicy18.setVerticalStretch(0);
        sizePolicy18.setHeightForWidth(keyLineEdit->sizePolicy().hasHeightForWidth());
        keyLineEdit->setSizePolicy(sizePolicy18);

        horizontalLayout_8->addWidget(keyLineEdit);


        gridLayout_11->addLayout(horizontalLayout_8, 3, 0, 1, 8);

        rollCounter_2 = new QLabel(fileEditFrame);
        rollCounter_2->setObjectName(QString::fromUtf8("rollCounter_2"));
        sizePolicy8.setHeightForWidth(rollCounter_2->sizePolicy().hasHeightForWidth());
        rollCounter_2->setSizePolicy(sizePolicy8);

        gridLayout_11->addWidget(rollCounter_2, 4, 8, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(3);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        headRoller_label_3 = new QLabel(fileEditFrame);
        headRoller_label_3->setObjectName(QString::fromUtf8("headRoller_label_3"));
        sizePolicy13.setHeightForWidth(headRoller_label_3->sizePolicy().hasHeightForWidth());
        headRoller_label_3->setSizePolicy(sizePolicy13);
        headRoller_label_3->setMaximumSize(QSize(308, 16777215));

        horizontalLayout_11->addWidget(headRoller_label_3);

        headRoller_3 = new QLineEdit(fileEditFrame);
        headRoller_3->setObjectName(QString::fromUtf8("headRoller_3"));
        headRoller_3->setEnabled(true);
        sizePolicy3.setHeightForWidth(headRoller_3->sizePolicy().hasHeightForWidth());
        headRoller_3->setSizePolicy(sizePolicy3);
        headRoller_3->setStyleSheet(QString::fromUtf8(""));
        headRoller_3->setMaxLength(64);
        headRoller_3->setEchoMode(QLineEdit::Normal);

        horizontalLayout_11->addWidget(headRoller_3);


        gridLayout_11->addLayout(horizontalLayout_11, 4, 0, 1, 8);

        fileErrorLabel = new QLabel(fileEditFrame);
        fileErrorLabel->setObjectName(QString::fromUtf8("fileErrorLabel"));
        fileErrorLabel->setStyleSheet(QString::fromUtf8("color: #ff0000;\n"
"background-color: #282810;"));

        gridLayout_11->addWidget(fileErrorLabel, 6, 0, 1, 10);

        reloadFileButton = new QPushButton(fileEditFrame);
        reloadFileButton->setObjectName(QString::fromUtf8("reloadFileButton"));
        sizePolicy9.setHeightForWidth(reloadFileButton->sizePolicy().hasHeightForWidth());
        reloadFileButton->setSizePolicy(sizePolicy9);
        reloadFileButton->setMaximumSize(QSize(16777215, 20));
        reloadFileButton->setAutoDefault(true);

        gridLayout_11->addWidget(reloadFileButton, 0, 2, 1, 1);

        overwriteCurrentFileButton = new QPushButton(fileEditFrame);
        overwriteCurrentFileButton->setObjectName(QString::fromUtf8("overwriteCurrentFileButton"));
        sizePolicy9.setHeightForWidth(overwriteCurrentFileButton->sizePolicy().hasHeightForWidth());
        overwriteCurrentFileButton->setSizePolicy(sizePolicy9);
        overwriteCurrentFileButton->setMaximumSize(QSize(16777215, 20));
        overwriteCurrentFileButton->setAutoDefault(true);

        gridLayout_11->addWidget(overwriteCurrentFileButton, 0, 3, 1, 1);


        gridLayout->addWidget(fileEditFrame, 0, 5, 1, 1);

        mainSplitter->addWidget(upperMainWidget);
        bottomMainWidget = new QWidget(mainSplitter);
        bottomMainWidget->setObjectName(QString::fromUtf8("bottomMainWidget"));
        bottomMainWidget->setEnabled(true);
        sizePolicy1.setHeightForWidth(bottomMainWidget->sizePolicy().hasHeightForWidth());
        bottomMainWidget->setSizePolicy(sizePolicy1);
        gridLayout_9 = new QGridLayout(bottomMainWidget);
        gridLayout_9->setSpacing(2);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(3, 3, 3, 3);
        disableBottomMainWidgetButton = new QPushButton(bottomMainWidget);
        disableBottomMainWidgetButton->setObjectName(QString::fromUtf8("disableBottomMainWidgetButton"));
        disableBottomMainWidgetButton->setMinimumSize(QSize(25, 25));
        disableBottomMainWidgetButton->setMaximumSize(QSize(25, 25));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("img/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        disableBottomMainWidgetButton->setIcon(icon3);
        disableBottomMainWidgetButton->setIconSize(QSize(20, 20));
        disableBottomMainWidgetButton->setAutoDefault(true);

        gridLayout_9->addWidget(disableBottomMainWidgetButton, 0, 2, 1, 1);

        mainOrientationButton = new QPushButton(bottomMainWidget);
        mainOrientationButton->setObjectName(QString::fromUtf8("mainOrientationButton"));
        mainOrientationButton->setAutoDefault(true);

        gridLayout_9->addWidget(mainOrientationButton, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer, 0, 1, 1, 1);

        viewEditorSplitter = new QSplitter(bottomMainWidget);
        viewEditorSplitter->setObjectName(QString::fromUtf8("viewEditorSplitter"));
        viewEditorSplitter->setOrientation(Qt::Horizontal);
        plainTextEdit = new QPlainTextEdit(viewEditorSplitter);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setLineWrapMode(QPlainTextEdit::NoWrap);
        plainTextEdit->setPlainText(QString::fromUtf8("asdfsxdfbvfg"));
        viewEditorSplitter->addWidget(plainTextEdit);
        layoutWidget = new QWidget(viewEditorSplitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        gridLayout_10 = new QGridLayout(layoutWidget);
        gridLayout_10->setSpacing(1);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        graphicsView = new QGraphicsView(layoutWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setInteractive(true);

        gridLayout_10->addWidget(graphicsView, 0, 0, 1, 1);

        videoWidget = new QVideoWidget(layoutWidget);
        videoWidget->setObjectName(QString::fromUtf8("videoWidget"));
        sizePolicy11.setHeightForWidth(videoWidget->sizePolicy().hasHeightForWidth());
        videoWidget->setSizePolicy(sizePolicy11);

        gridLayout_10->addWidget(videoWidget, 0, 1, 1, 1);

        viewEditorSplitter->addWidget(layoutWidget);

        gridLayout_9->addWidget(viewEditorSplitter, 1, 0, 1, 3);

        mainSplitter->addWidget(bottomMainWidget);

        gridLayout_8->addWidget(mainSplitter, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 998, 22));
        menuBar->setStyleSheet(QString::fromUtf8("QMenuBar::item{\n"
"	background-color: #202020;\n"
"}\n"
"QMenuBar::item:selected{\n"
"	background-color: #323232;\n"
"}"));
        menuFiles = new QMenu(menuBar);
        menuFiles->setObjectName(QString::fromUtf8("menuFiles"));
        MainWindow->setMenuBar(menuBar);
#ifndef QT_NO_SHORTCUT
        label_5->setBuddy(loginLineEdit);
        label_4->setBuddy(passwordLineEdit);
        label_3->setBuddy(descriptionLineEdit);
        label_2->setBuddy(domainLineEdit);
        headRoller_label->setBuddy(passwordLineEdit);
        headRoller_label_3->setBuddy(passwordLineEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(pathLineEdit, fileDescLineEdit);
        QWidget::setTabOrder(fileDescLineEdit, keyLineEdit);
        QWidget::setTabOrder(keyLineEdit, refreshButton);
        QWidget::setTabOrder(refreshButton, dbList);
        QWidget::setTabOrder(dbList, openFileButton);
        QWidget::setTabOrder(openFileButton, scrollArea);
        QWidget::setTabOrder(scrollArea, domainLineEdit);
        QWidget::setTabOrder(domainLineEdit, descriptionLineEdit);
        QWidget::setTabOrder(descriptionLineEdit, loginLineEdit);
        QWidget::setTabOrder(loginLineEdit, passwordLengthBox);
        QWidget::setTabOrder(passwordLengthBox, generatePasswordButton);
        QWidget::setTabOrder(generatePasswordButton, passwordLineEdit);
        QWidget::setTabOrder(passwordLineEdit, addNewPasswordButton);
        QWidget::setTabOrder(addNewPasswordButton, dontAddPasswordButton);
        QWidget::setTabOrder(dontAddPasswordButton, useRollerGenerator);
        QWidget::setTabOrder(useRollerGenerator, headRoller);
        QWidget::setTabOrder(headRoller, saveButton);
        QWidget::setTabOrder(saveButton, newRecordButton);
        QWidget::setTabOrder(newRecordButton, scrollSites);
        QWidget::setTabOrder(scrollSites, newEncryptedFileButton);
        QWidget::setTabOrder(newEncryptedFileButton, saveKeyVectorButton);
        QWidget::setTabOrder(saveKeyVectorButton, scrollFiles);
        QWidget::setTabOrder(scrollFiles, showLettersCheckBox);
        QWidget::setTabOrder(showLettersCheckBox, filenameEdit);
        QWidget::setTabOrder(filenameEdit, passwordEdit);
        QWidget::setTabOrder(passwordEdit, repeatPasswordEdit);
        QWidget::setTabOrder(repeatPasswordEdit, decryptButton);
        QWidget::setTabOrder(decryptButton, backToFileListButton);
        QWidget::setTabOrder(backToFileListButton, bruter);
        QWidget::setTabOrder(bruter, dontAddFileButton);
        QWidget::setTabOrder(dontAddFileButton, useRollerGenerator_2);
        QWidget::setTabOrder(useRollerGenerator_2, encryptFileButton);
        QWidget::setTabOrder(encryptFileButton, generateKeyButton);
        QWidget::setTabOrder(generateKeyButton, keyLengthBox);
        QWidget::setTabOrder(keyLengthBox, headRoller_3);
        QWidget::setTabOrder(headRoller_3, reloadFileButton);
        QWidget::setTabOrder(reloadFileButton, overwriteCurrentFileButton);
        QWidget::setTabOrder(overwriteCurrentFileButton, disableBottomMainWidgetButton);
        QWidget::setTabOrder(disableBottomMainWidgetButton, mainOrientationButton);
        QWidget::setTabOrder(mainOrientationButton, plainTextEdit);
        QWidget::setTabOrder(plainTextEdit, graphicsView);

        menuBar->addAction(menuFiles->menuAction());
        menuFiles->addAction(actionNewDataBase);
        menuFiles->addAction(actionNewKeyVector);
        menuFiles->addAction(actionOpen_loader);

        retranslateUi(MainWindow);
        QObject::connect(domainLineEdit, SIGNAL(returnPressed()), descriptionLineEdit, SLOT(setFocus()));
        QObject::connect(descriptionLineEdit, SIGNAL(returnPressed()), loginLineEdit, SLOT(setFocus()));
        QObject::connect(loginLineEdit, SIGNAL(returnPressed()), passwordLineEdit, SLOT(setFocus()));
        QObject::connect(passwordLineEdit, SIGNAL(returnPressed()), addNewPasswordButton, SLOT(setFocus()));
        QObject::connect(passwordEdit, SIGNAL(returnPressed()), decryptButton, SLOT(click()));
        QObject::connect(useRollerGenerator, SIGNAL(clicked(bool)), useRollerGenerator_2, SLOT(setChecked(bool)));
        QObject::connect(useRollerGenerator_2, SIGNAL(clicked(bool)), useRollerGenerator, SLOT(setChecked(bool)));
        QObject::connect(pathLineEdit, SIGNAL(returnPressed()), fileDescLineEdit, SLOT(setFocus()));
        QObject::connect(fileDescLineEdit, SIGNAL(returnPressed()), keyLineEdit, SLOT(setFocus()));
        QObject::connect(keyLineEdit, SIGNAL(returnPressed()), encryptFileButton, SLOT(setFocus()));
        QObject::connect(repeatPasswordEdit, SIGNAL(returnPressed()), decryptButton, SLOT(click()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Password Data Base Manager", nullptr));
        actionOpen_loader->setText(QApplication::translate("MainWindow", "open loader", nullptr));
        actionNewDataBase->setText(QApplication::translate("MainWindow", "new database", nullptr));
        actionNewKeyVector->setText(QApplication::translate("MainWindow", "new key vector", nullptr));
        codingErrorDisplay->setText(QString());
        showLettersCheckBox->setText(QApplication::translate("MainWindow", "show letters in password", nullptr));
        repeatPasswordLabel->setText(QApplication::translate("MainWindow", "repeat:", nullptr));
        repeatPasswordEdit->setText(QString());
        repeatPasswordEdit->setPlaceholderText(QString());
        label->setText(QApplication::translate("MainWindow", "password:", nullptr));
        passwordEdit->setText(QString());
        passwordEdit->setPlaceholderText(QString());
        filenameLabel1->setText(QApplication::translate("MainWindow", "file name:", nullptr));
        decryptButton->setText(QApplication::translate("MainWindow", "decrypt", nullptr));
        bruter->setText(QApplication::translate("MainWindow", "brute", nullptr));
        backToFileListButton->setText(QString());
        passwordsMatchDot->setText(QApplication::translate("MainWindow", "passwords match", nullptr));
        dontClearPasswordBox->setText(QApplication::translate("MainWindow", "don't clear password", nullptr));
        CFB8CheckBox->setText(QApplication::translate("MainWindow", "use CFB8", nullptr));
        refreshButton->setText(QApplication::translate("MainWindow", "refresh", nullptr));
        openFileButton->setText(QApplication::translate("MainWindow", "open", nullptr));
        dontAddPasswordButton->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "login:", nullptr));
        addNewPasswordButton->setText(QApplication::translate("MainWindow", "done", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "password:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "description:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "domain/program:", nullptr));
        headRoller_label->setText(QApplication::translate("MainWindow", "Please, roll your head over a keyboard with this field selected:", nullptr));
        headRoller_label_1->setText(QApplication::translate("MainWindow", "times looped", nullptr));
        rollCounter->setText(QApplication::translate("MainWindow", "000000", nullptr));
        generatePasswordButton->setText(QApplication::translate("MainWindow", "generate", nullptr));
        useRollerGenerator->setText(QApplication::translate("MainWindow", "use this generator", nullptr));
        saveButton->setText(QApplication::translate("MainWindow", "save", nullptr));
        filenameDLabel->setText(QApplication::translate("MainWindow", "new", nullptr));
        newRecordButton->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "shift-up, ctrl-down, shift+ctrl-delete", nullptr));
        newEncryptedFileButton->setText(QString());
        filenameKLabel->setText(QApplication::translate("MainWindow", "new", nullptr));
        saveKeyVectorButton->setText(QApplication::translate("MainWindow", "save", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "shift-up, ctrl-down, shift+ctrl-delete", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "path:", nullptr));
        dontAddFileButton->setText(QString());
        headRoller_label_4->setText(QApplication::translate("MainWindow", "times looped", nullptr));
        useRollerGenerator_2->setText(QApplication::translate("MainWindow", "use this generator", nullptr));
        encryptFileButton->setText(QApplication::translate("MainWindow", "encrypt and save", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "description:", nullptr));
        generateKeyButton->setText(QApplication::translate("MainWindow", "generate", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "key:", nullptr));
        rollCounter_2->setText(QApplication::translate("MainWindow", "000000", nullptr));
        headRoller_label_3->setText(QApplication::translate("MainWindow", "Please, roll your head over a keyboard with this field selected:", nullptr));
        fileErrorLabel->setText(QString());
        reloadFileButton->setText(QApplication::translate("MainWindow", "reload", nullptr));
        overwriteCurrentFileButton->setText(QApplication::translate("MainWindow", "done", nullptr));
        disableBottomMainWidgetButton->setText(QString());
        mainOrientationButton->setText(QApplication::translate("MainWindow", "change orientation", nullptr));
        menuFiles->setTitle(QApplication::translate("MainWindow", "files", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
