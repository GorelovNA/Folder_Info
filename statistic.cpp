#include "statistic.h"

QPair<quint32,quint64> & operator+=(QPair<quint32,quint64> & l,const QPair<quint32,quint64> & r) {
    l.first += r.first;
    l.second += r.second;
    return l;
}

// --- CONSTRUCTOR ---
statistic::statistic():
    in_progress(0),exit(0),stopped(0){
    // you could copy data from constructor arguments to internal variables here.
}

// --- DECONSTRUCTOR ---
statistic::~statistic() {
    // free resources

}

// --- PROCESS ---
// Start processing data.
void statistic::process(const QString& dir_name) {
    // allocate resources using new here

    QPair<quint32,quint64> Count_Size(0,0);//1st - all files cnt, 2nd - all file size
    if(stopped) stopped = false;
    map_suf.clear();
    in_progress = true;
    create_config(dir_name, Count_Size);//recursive
    qDebug() << "size = " << Count_Size.second;
    in_progress = false;
    emit stat_finish(stopped, map_suf);

}

bool statistic::create_config(const QString& dir_name,QPair<quint32,quint64> &Count_Size){
    if(exit){emit finished(); return 0;}//close thread when main closed
    if(stopped){return 0;}//stop creating

    QDir dir(dir_name);
    QFileInfoList info_list = dir.entryInfoList(QDir::Hidden | QDir::NoDotAndDotDot | QDir::AllEntries);
    for(const auto& fileInfo : info_list)
    {
        auto path = fileInfo.absoluteFilePath();
        if(fileInfo.isDir()){
            create_config(path, Count_Size);//recursive
        }
        else{
            Count_Size += {1,fileInfo.size()};

            map_suf[fileInfo.suffix()] += {1,fileInfo.size()};//add suffix info
        }
    }

    if(!stopped && !exit) emit return_size(Count_Size,map_suf.size());
    return 1;
}


void statistic::set_stop(const bool i){
    stopped = i;
}

bool statistic::get_progress(){
    return in_progress;
}

void statistic::set_exit(const bool i){
    exit = i;
}


