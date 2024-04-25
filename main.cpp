#include "defines.h"


#ifdef USE_PYTHON_CRYPTO
    #define _GLIBCXX_USE_CXX11_ABI 0
#endif


#include "mainwindow.h"
#include <QApplication>
#include <stdio.h>
#include <stdlib.h>
#include <QtGui>

#include <iostream>
#include <iomanip>
#include "cryptopp_headers/aes.h"
#include "cryptopp_headers/modes.h"
#include "cryptopp_headers/osrng.h"
#ifdef USE_PYTHON_CRYPTO
    #include <boost/python.hpp>
#endif




void MessageOutputHandler(QtMsgType type, const QMessageLogContext &context __attribute__((unused)), const QString &msg){
    QByteArray localMsg=msg.toLocal8Bit();
    //fprintf(stderr, "%s (%s:%u, %s)", localMsg.constData(), context.file, context.line, context.function);
    switch(type){
        case QtDebugMsg:
            fprintf(stderr, "\033[37;1m%s\033[0m", localMsg.constData());
        break;
        case QtInfoMsg:
            fprintf(stderr, "\033[36;1m%s\n\033[0m", localMsg.constData());
        break;
        case QtWarningMsg:
            fprintf(stderr, "\033[33;1mWarning:\033[0m \033[37;1m%s\033[0m\n", localMsg.constData());
        break;
        case QtCriticalMsg:
            fprintf(stderr, "Critical: \033[37;1m%s\033[0m\n", localMsg.constData());
        break;
        case QtFatalMsg:
            fprintf(stderr, "Fatal: %s\n", localMsg.constData());
            fflush(stderr);
            abort();
    }
    fflush(stderr);
}

int main(int argc, char *argv[]){
    qInstallMessageHandler(MessageOutputHandler);

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
