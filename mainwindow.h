#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <statistic.h>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QSortFilterProxyModel *fileSystemProxyModel;
    //QVector<suffix> vec;

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_treeView_clicked(const QModelIndex &index);

    void return_size(const QPair<quint32, quint64> &Count_Size, const quint32 &suff_cnt);
    void stat_finish(bool stop, const QMap<QString,QPair<quint32,quint64>> &map_suf);

private:
    Ui::MainWindow *ui;
    QMovie *movie;
    QThread* thread;

    QFileSystemModel *model1;
    QItemSelectionModel *treeSelectionModel;

    statistic* stat;

signals:
    void start_statistic(const QString& dir_name);


};

class FileSystemModelFilterProxyModel : public QSortFilterProxyModel
{
protected:
    virtual bool filterAcceptsRow(int sourceRow, const QModelIndex& sourceParent) const;
};

#endif // MAINWINDOW_H
