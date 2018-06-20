#include "mainwindow.h"
#include <QApplication>
#include <QStyleFactory>

//Q_DECLARE_METATYPE(suffix)



int main(int argc, char *argv[])
{
    QStringList paths = QCoreApplication::libraryPaths();
    paths.append(".");
    paths.append("imageformats");
    paths.append("platforms");
    paths.append("sqldrivers");
    paths.append("styles");
    QCoreApplication::setLibraryPaths(paths);

    QApplication a(argc, argv);
    a.setStyle(QStyleFactory::create("fusion"));

    qRegisterMetaType<QPair<quint32,quint64>>("QPair<quint32,quint64>");
    qRegisterMetaType<QMap<QString,QPair<quint32,quint64>>>("QMap<QString,QPair<quint32,quint64>>");

    MainWindow w;
    w.show();

    return a.exec();
}
