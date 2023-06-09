#include "mainwindow.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile styleSheetFile("./SpyBot.qss");
    styleSheetFile.open(QFile::ReadOnly);
    QString stylesheet = QLatin1String(styleSheetFile.readAll());
    a.setStyleSheet(stylesheet);
    MainWindow w;
    w.show();
    return a.exec();
}
