#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QMovie>
#include <QDirModel>
#include <QStandardItemModel>
#include <QSplitter>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->splitter->setStretchFactor(0,0);
    ui->splitter->setStretchFactor(1,1);;

    model1 = new QFileSystemModel(this);

    movie = new QMovie(":/images/img/load8.gif");
    movie->setScaledSize(ui->label_load_size->size());

    model1->setFilter(QDir::NoDot | QDir::AllEntries | QDir::System);
    model1->setRootPath("");
    model1->setReadOnly(true);

    fileSystemProxyModel = new FileSystemModelFilterProxyModel();
    fileSystemProxyModel->setSourceModel(model1);
    fileSystemProxyModel->setSortCaseSensitivity(Qt::CaseInsensitive);


    ui->treeView->setModel(fileSystemProxyModel);
    ui->treeView->setHeaderHidden(true);
    ui->treeView->setUniformRowHeights(true);
    ui->treeView->hideColumn(1);
    ui->treeView->hideColumn(2);
    ui->treeView->hideColumn(3);
    ui->treeView->setDragDropMode(QAbstractItemView::DropOnly);
    ui->treeView->setDefaultDropAction(Qt::MoveAction);
    ui->treeView->setDropIndicatorShown(true);
    ui->treeView->setEditTriggers(QAbstractItemView::EditKeyPressed | QAbstractItemView::SelectedClicked);
    ui->treeView->setContextMenuPolicy(Qt::CustomContextMenu);

    //поток (реализован по методу Maya Posch) mayaposch.wordpress.com
    thread = new QThread(this);
    stat = new statistic();
    stat->moveToThread(thread);

    //connect(stat, SIGNAL(error(QString)), this, SLOT(errorString(QString)));
    connect(this, &MainWindow::start_statistic, stat, &statistic::process);
    connect(stat, &statistic::return_size, this, &MainWindow::return_size);
    connect(stat, &statistic::stat_finish, this, &MainWindow::stat_finish);
    connect(stat, &statistic::finished, thread, &QThread::quit);
    connect(stat, &statistic::finished, stat, &statistic::deleteLater);
    connect(thread, &QThread::finished, thread, &QThread::deleteLater);


    thread->start();
}
//-----------------------

bool FileSystemModelFilterProxyModel::filterAcceptsRow(int sourceRow, const QModelIndex &sourceParent) const
{
    QModelIndex index0 = sourceModel()->index(sourceRow, 0, sourceParent);
    QFileSystemModel* fileSystemModel = qobject_cast<QFileSystemModel*>(sourceModel());
    if (fileSystemModel->isDir(index0) && fileSystemModel->fileName(index0).compare("..") != 0)
        return true;
    else
        return false;
}


void MainWindow::return_size(const QPair<quint32,quint64> &Count_Size, const quint32 &suff_cnt){
    QLocale locale;
    QString valueText = locale.formattedDataSize(Count_Size.second,2,locale.DataSizeTraditionalFormat);

    ui->label_full_size->setText("Размер: "+ valueText +" (" + QString::number(Count_Size.second)+" байт), Файлов: " + QString::number(Count_Size.first));
    ui->label_cnt_cuff->setText("Уникальных расширений найдено: "+ QString::number(suff_cnt));
}

void MainWindow::stat_finish(bool stop, const QMap<QString,QPair<quint32,quint64>> &map_suf){
    if(!stop){//finish
        qDebug() << "готово (ready)";
        movie->stop();
        ui->label_load_size->setPixmap(QPixmap(":/images/img/ready2.png").scaled(ui->label_load_size->size(),Qt::KeepAspectRatio));
        ui->label_load_suff->setPixmap(QPixmap(":/images/img/ready2.png").scaled(ui->label_load_suff->size(),Qt::KeepAspectRatio));
        ui->groupBox_suff->setEnabled(1);

        //build suffix group
        QLocale locale;
        ui->treeWidget->setSortingEnabled(0);

        QMapIterator<QString,QPair<quint32,quint64>> i(map_suf);
        while (i.hasNext()) {
            i.next();

            QTreeWidgetItem * item = new QTreeWidgetItem();
            item->setText(0,i.key());
            item->setData(1,Qt::DisplayRole,i.value().first);
            item->setText(2,locale.formattedDataSize(i.value().second,2,locale.DataSizeTraditionalFormat));
            item->setText(3,locale.formattedDataSize(i.value().second/i.value().first,2,locale.DataSizeTraditionalFormat));
            ui->treeWidget->addTopLevelItem(item);
        }

        ui->treeWidget->setSortingEnabled(1);
        ui->treeWidget->QTreeView::sortByColumn(0,Qt::AscendingOrder);// sortByColumn(0);// QTreeView::sortByColumn(0);
        ui->treeWidget->resizeColumnToContents(0);
        ui->treeWidget->resizeColumnToContents(1);
        ui->treeWidget->resizeColumnToContents(2);
        ui->treeWidget->resizeColumnToContents(3);
    }
}

void MainWindow::on_treeView_clicked(const QModelIndex &index)
{        
    if(stat->get_progress()){//stop stat if running
        stat->set_stop(1);
    }

    ui->groupBox_suff->setEnabled(0);
    ui->treeWidget->clear();
    ui->label_load_size->setMovie(movie);
    ui->label_load_suff->setMovie(movie);
    movie->start();

    QModelIndex index2 = fileSystemProxyModel->mapToSource(index);
    QString path = model1->fileInfo(index2).absoluteFilePath();
    qDebug() << path;

    quint32 num_dirs=0; //cnt parrent folders
    QDir dir(path);
    QFileInfoList info_list = dir.entryInfoList(QDir::Hidden | QDir::NoDotAndDotDot | QDir::AllEntries);
    for(const auto& fileInfo : info_list)
        if(fileInfo.isDir())
            num_dirs++;

    ui->label_dir->setPixmap(QPixmap(":/images/img/folder.png").scaled(ui->label_dir->size(),Qt::KeepAspectRatio));
    ui->label_dir_cnt->setText(QString::number(num_dirs) + " folder(s) (" + index.data().toString() + ")");
    ui->groupBox_dir->setTitle(path);

    qDebug() << "выдаем (wait)";
    emit start_statistic(path);
}



///destruct
MainWindow::~MainWindow()
{
    if(!thread->isFinished()){
        stat->set_exit(1);
        thread->quit();
        thread->wait();
    }
    delete ui;
}
