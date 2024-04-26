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
    QFrame *loadingFrame;
    QGridLayout *gridLayout_2;
    QPushButton *refreshButton;
    QPushButton *openFileButton;
    QListWidget *dbList;
    QFrame *passwordsFrame;
    QGridLayout *gridLayout_4;
    QPushButton *saveButton;
    QLabel *filenameDLabel;
    QPushButton *newRecordButton;
    QLabel *label_6;
    QScrollArea *scrollSites;
    QWidget *scrollAreaHolder;
    QVBoxLayout *verticalLayout;
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
        randomizerFrame = new QFrame(upperMainWidget);
        randomizerFrame->setObjectName(QString::fromUtf8("randomizerFrame"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(randomizerFrame->sizePolicy().hasHeightForWidth());
        randomizerFrame->setSizePolicy(sizePolicy2);
        randomizerFrame->setLayoutDirection(Qt::LeftToRight);
        randomizerFrame->setFrameShape(QFrame::StyledPanel);
        randomizerFrame->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(randomizerFrame);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        dontAddPasswordButton = new QPushButton(randomizerFrame);
        dontAddPasswordButton->setObjectName(QString::fromUtf8("dontAddPasswordButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(dontAddPasswordButton->sizePolicy().hasHeightForWidth());
        dontAddPasswordButton->setSizePolicy(sizePolicy3);
        dontAddPasswordButton->setMinimumSize(QSize(20, 20));
        dontAddPasswordButton->setMaximumSize(QSize(20, 20));
        dontAddPasswordButton->setLayoutDirection(Qt::LeftToRight);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        dontAddPasswordButton->setIcon(icon);
        dontAddPasswordButton->setAutoDefault(true);

        gridLayout_5->addWidget(dontAddPasswordButton, 2, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(3);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(randomizerFrame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy4(QSizePolicy::Ignored, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy4);
        label_5->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_5->addWidget(label_5);

        loginLineEdit = new QLineEdit(randomizerFrame);
        loginLineEdit->setObjectName(QString::fromUtf8("loginLineEdit"));
        loginLineEdit->setEnabled(true);
        QSizePolicy sizePolicy5(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(loginLineEdit->sizePolicy().hasHeightForWidth());
        loginLineEdit->setSizePolicy(sizePolicy5);
        loginLineEdit->setStyleSheet(QString::fromUtf8(""));
        loginLineEdit->setMaxLength(128);
        loginLineEdit->setEchoMode(QLineEdit::Normal);

        horizontalLayout_5->addWidget(loginLineEdit);


        gridLayout_5->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        addNewPasswordButton = new QPushButton(randomizerFrame);
        addNewPasswordButton->setObjectName(QString::fromUtf8("addNewPasswordButton"));
        sizePolicy3.setHeightForWidth(addNewPasswordButton->sizePolicy().hasHeightForWidth());
        addNewPasswordButton->setSizePolicy(sizePolicy3);
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
        sizePolicy4.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy4);
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
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy6);
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
        possibleCharsScroll->setGeometry(QRect(0, 0, 226, 68));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(possibleCharsScroll->sizePolicy().hasHeightForWidth());
        possibleCharsScroll->setSizePolicy(sizePolicy7);
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
        sizePolicy4.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy4);
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
        QSizePolicy sizePolicy8(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy8);
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
        QSizePolicy sizePolicy9(QSizePolicy::Ignored, QSizePolicy::Minimum);
        sizePolicy9.setHorizontalStretch(1);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(headRoller_label->sizePolicy().hasHeightForWidth());
        headRoller_label->setSizePolicy(sizePolicy9);
        headRoller_label->setMaximumSize(QSize(308, 16777215));

        horizontalLayout_6->addWidget(headRoller_label);

        headRoller = new QLineEdit(randomizerFrame);
        headRoller->setObjectName(QString::fromUtf8("headRoller"));
        headRoller->setEnabled(true);
        QSizePolicy sizePolicy10(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(headRoller->sizePolicy().hasHeightForWidth());
        headRoller->setSizePolicy(sizePolicy10);
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
        sizePolicy2.setHeightForWidth(rollCounter->sizePolicy().hasHeightForWidth());
        rollCounter->setSizePolicy(sizePolicy2);

        gridLayout_5->addWidget(rollCounter, 5, 1, 1, 1);

        generatePasswordButton = new QPushButton(randomizerFrame);
        generatePasswordButton->setObjectName(QString::fromUtf8("generatePasswordButton"));
        sizePolicy3.setHeightForWidth(generatePasswordButton->sizePolicy().hasHeightForWidth());
        generatePasswordButton->setSizePolicy(sizePolicy3);
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

        loadingFrame = new QFrame(upperMainWidget);
        loadingFrame->setObjectName(QString::fromUtf8("loadingFrame"));
        QSizePolicy sizePolicy11(QSizePolicy::Ignored, QSizePolicy::Expanding);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(loadingFrame->sizePolicy().hasHeightForWidth());
        loadingFrame->setSizePolicy(sizePolicy11);
        loadingFrame->setStyleSheet(QString::fromUtf8(""));
        loadingFrame->setFrameShape(QFrame::StyledPanel);
        loadingFrame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(loadingFrame);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        refreshButton = new QPushButton(loadingFrame);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));
        sizePolicy10.setHeightForWidth(refreshButton->sizePolicy().hasHeightForWidth());
        refreshButton->setSizePolicy(sizePolicy10);
        refreshButton->setAutoDefault(true);
        refreshButton->setFlat(false);

        gridLayout_2->addWidget(refreshButton, 0, 0, 1, 1);

        openFileButton = new QPushButton(loadingFrame);
        openFileButton->setObjectName(QString::fromUtf8("openFileButton"));
        sizePolicy10.setHeightForWidth(openFileButton->sizePolicy().hasHeightForWidth());
        openFileButton->setSizePolicy(sizePolicy10);
        openFileButton->setAutoDefault(true);

        gridLayout_2->addWidget(openFileButton, 0, 1, 1, 1);

        dbList = new QListWidget(loadingFrame);
        dbList->setObjectName(QString::fromUtf8("dbList"));
        QSizePolicy sizePolicy12(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy12.setHorizontalStretch(0);
        sizePolicy12.setVerticalStretch(0);
        sizePolicy12.setHeightForWidth(dbList->sizePolicy().hasHeightForWidth());
        dbList->setSizePolicy(sizePolicy12);
        dbList->setStyleSheet(QString::fromUtf8("background-color: #282828;"));
        dbList->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);

        gridLayout_2->addWidget(dbList, 1, 0, 1, 2);


        gridLayout->addWidget(loadingFrame, 0, 0, 1, 1);

        passwordsFrame = new QFrame(upperMainWidget);
        passwordsFrame->setObjectName(QString::fromUtf8("passwordsFrame"));
        sizePolicy2.setHeightForWidth(passwordsFrame->sizePolicy().hasHeightForWidth());
        passwordsFrame->setSizePolicy(sizePolicy2);
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
        QSizePolicy sizePolicy13(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy13.setHorizontalStretch(0);
        sizePolicy13.setVerticalStretch(0);
        sizePolicy13.setHeightForWidth(saveButton->sizePolicy().hasHeightForWidth());
        saveButton->setSizePolicy(sizePolicy13);
        saveButton->setAutoDefault(true);

        gridLayout_4->addWidget(saveButton, 0, 2, 1, 1);

        filenameDLabel = new QLabel(passwordsFrame);
        filenameDLabel->setObjectName(QString::fromUtf8("filenameDLabel"));
        QSizePolicy sizePolicy14(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy14.setHorizontalStretch(0);
        sizePolicy14.setVerticalStretch(0);
        sizePolicy14.setHeightForWidth(filenameDLabel->sizePolicy().hasHeightForWidth());
        filenameDLabel->setSizePolicy(sizePolicy14);

        gridLayout_4->addWidget(filenameDLabel, 0, 1, 1, 1);

        newRecordButton = new QPushButton(passwordsFrame);
        newRecordButton->setObjectName(QString::fromUtf8("newRecordButton"));
        sizePolicy10.setHeightForWidth(newRecordButton->sizePolicy().hasHeightForWidth());
        newRecordButton->setSizePolicy(sizePolicy10);
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
        scrollAreaHolder->setGeometry(QRect(0, 0, 236, 16));
        QSizePolicy sizePolicy15(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy15.setHorizontalStretch(0);
        sizePolicy15.setVerticalStretch(0);
        sizePolicy15.setHeightForWidth(scrollAreaHolder->sizePolicy().hasHeightForWidth());
        scrollAreaHolder->setSizePolicy(sizePolicy15);
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

        decryptFrame = new QFrame(upperMainWidget);
        decryptFrame->setObjectName(QString::fromUtf8("decryptFrame"));
        sizePolicy11.setHeightForWidth(decryptFrame->sizePolicy().hasHeightForWidth());
        decryptFrame->setSizePolicy(sizePolicy11);
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
        sizePolicy10.setHeightForWidth(showLettersCheckBox->sizePolicy().hasHeightForWidth());
        showLettersCheckBox->setSizePolicy(sizePolicy10);
        showLettersCheckBox->setMaximumSize(QSize(220, 16777215));

        gridLayout_3->addWidget(showLettersCheckBox, 0, 2, 1, 1);

        repeatPasswordLayout = new QHBoxLayout();
        repeatPasswordLayout->setSpacing(6);
        repeatPasswordLayout->setObjectName(QString::fromUtf8("repeatPasswordLayout"));
        repeatPasswordLabel = new QLabel(decryptFrame);
        repeatPasswordLabel->setObjectName(QString::fromUtf8("repeatPasswordLabel"));
        sizePolicy8.setHeightForWidth(repeatPasswordLabel->sizePolicy().hasHeightForWidth());
        repeatPasswordLabel->setSizePolicy(sizePolicy8);
        repeatPasswordLabel->setMaximumSize(QSize(50, 16777215));

        repeatPasswordLayout->addWidget(repeatPasswordLabel);

        repeatPasswordEdit = new QLineEdit(decryptFrame);
        repeatPasswordEdit->setObjectName(QString::fromUtf8("repeatPasswordEdit"));
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
        sizePolicy8.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy8);
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
        sizePolicy8.setHeightForWidth(filenameLabel1->sizePolicy().hasHeightForWidth());
        filenameLabel1->setSizePolicy(sizePolicy8);
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
        QSizePolicy sizePolicy16(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy16.setHorizontalStretch(0);
        sizePolicy16.setVerticalStretch(0);
        sizePolicy16.setHeightForWidth(decryptButton->sizePolicy().hasHeightForWidth());
        decryptButton->setSizePolicy(sizePolicy16);
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
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("img/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        disableBottomMainWidgetButton->setIcon(icon2);
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
        sizePolicy6.setHeightForWidth(videoWidget->sizePolicy().hasHeightForWidth());
        videoWidget->setSizePolicy(sizePolicy6);

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
#endif // QT_NO_SHORTCUT
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
        QWidget::setTabOrder(scrollSites, showLettersCheckBox);
        QWidget::setTabOrder(showLettersCheckBox, filenameEdit);
        QWidget::setTabOrder(filenameEdit, passwordEdit);
        QWidget::setTabOrder(passwordEdit, repeatPasswordEdit);
        QWidget::setTabOrder(repeatPasswordEdit, decryptButton);
        QWidget::setTabOrder(decryptButton, backToFileListButton);
        QWidget::setTabOrder(backToFileListButton, bruter);
        QWidget::setTabOrder(bruter, disableBottomMainWidgetButton);
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
        QObject::connect(repeatPasswordEdit, SIGNAL(returnPressed()), decryptButton, SLOT(click()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Password Data Base Manager", nullptr));
        actionOpen_loader->setText(QApplication::translate("MainWindow", "open loader", nullptr));
        actionNewDataBase->setText(QApplication::translate("MainWindow", "new database", nullptr));
        actionNewKeyVector->setText(QApplication::translate("MainWindow", "new key vector", nullptr));
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
        refreshButton->setText(QApplication::translate("MainWindow", "refresh", nullptr));
        openFileButton->setText(QApplication::translate("MainWindow", "open", nullptr));
        saveButton->setText(QApplication::translate("MainWindow", "save", nullptr));
        filenameDLabel->setText(QApplication::translate("MainWindow", "new", nullptr));
        newRecordButton->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "shift-up, ctrl-down, shift+ctrl-delete", nullptr));
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
