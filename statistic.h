#ifndef STATISTIC_H
#define STATISTIC_H

#include <QObject>
#include <QDebug>
#include <QThread>
#include <QStringList>
#include <QMainWindow>
#include <QFileSystemModel>
#include <QSortFilterProxyModel>
#include <QItemSelectionModel>
#include <QPair>



struct suffix{
    QString name;
    quint32 cnt;
    quint64 size;
};


class statistic : public QObject
{
    Q_OBJECT
public:
    statistic();
    ~statistic();

    void set_exit(const bool i);
    void set_stop(const bool i);
    bool get_stop();

public slots:
    //void process(const QString& dir_name, QVector<suffix> &vec);//выполняет роль конструктора класса
    void process(const QString& dir_name, QVector<suffix> *vec);//выполняет роль конструктора класса

signals:
    void finished();
    void stat_finish(bool state);
    void error(QString err);
    void return_size(const QPair<quint32,quint64> &Count_Size);

private:
    // add your variables here
    bool create_config(const QString& dir_name, QVector<suffix> *vec, QPair<quint32,quint64> *Count_Size);
    bool exit;
    bool stop;



};

#endif // STATISTIC_H
