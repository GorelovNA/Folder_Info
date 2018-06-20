#include "mainwindow.h"
#include <QApplication>

//Q_DECLARE_METATYPE(suffix)

int main(int argc, char *argv[])
{
    QStringList paths = QCoreApplication::libraryPaths();
    paths.append(".");
    paths.append("imageformats");
    paths.append("platforms");
    paths.append("sqldrivers");
    QCoreApplication::setLibraryPaths(paths);

    QApplication a(argc, argv);
    qRegisterMetaType<QPair<quint32,quint64>>("QPair<quint32,quint64>");
    //qRegisterMetaType<QVector<suffix>>("QVector<suffix>");
    MainWindow w;
    w.show();

    return a.exec();
}
