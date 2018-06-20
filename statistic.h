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



/*struct suffix{
    //QString name;
    quint32 cnt;
    quint64 size;

    suffix & operator +=(const suffix &b) {
       cnt += b.cnt;
       size += b.size;
       return *this;
    }
};*/

class statistic : public QObject
{
    Q_OBJECT
public:
    statistic();
    ~statistic();

    void set_exit(const bool i);
    void set_stop(const bool i);
    bool get_progress();

public slots:
    //void process(const QString& dir_name, QVector<suffix> &vec);//выполняет роль конструктора класса
    void process(const QString& dir_name);//выполняет роль конструктора класса

signals:
    void finished();
    void stat_finish(bool state, const QMap<QString,QPair<quint32,quint64>> &map_suf);
    void error(QString err);
    void return_size(const QPair<quint32,quint64> &Count_Size, const quint32 &suff_cnt);

private:
    // add your variables here
    bool create_config(const QString& dir_name,QPair<quint32,quint64> &Count_Size);
    bool in_progress;
    bool exit;
    bool stopped;
    QMap<QString,QPair<quint32,quint64>> map_suf; //qpair.f - cnt suffix, qpair.s - size suffix


};

#endif // STATISTIC_H
