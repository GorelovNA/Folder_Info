#include "statistic.h"

// --- CONSTRUCTOR ---
statistic::statistic():exit(0),stop(0) {
    // you could copy data from constructor arguments to internal variables here.

}

// --- DECONSTRUCTOR ---
statistic::~statistic() {
    // free resources

}

// --- PROCESS ---
// Start processing data.
void statistic::process(const QString& dir_name, QVector<suffix> *vec) {
    // allocate resources using new here
    QPair<quint32,quint64> Count_Size(0,0);//1st - all files cnt, 2nd - all file size

    if(stop) stop = false;
    vec->clear();
    create_config(dir_name, vec,&Count_Size);//recursive
    qDebug() << "size = " << Count_Size.second;
    emit stat_finish(stop);

}

bool statistic::create_config(const QString& dir_name, QVector<suffix> *vec, QPair<quint32,quint64> *Count_Size){
    if(exit){emit finished(); return 0;}//close thread when main closed
    if(stop){return 0;}//stop creating

    QDir dir(dir_name);
    QFileInfoList info_list = dir.entryInfoList(QDir::Hidden | QDir::NoDotAndDotDot | QDir::AllEntries);
    for(const auto& fileInfo : info_list)
    {
        auto path = fileInfo.absoluteFilePath();
        if(fileInfo.isDir()){
            create_config(path,vec,Count_Size);//recursive
        }
        else{
            Count_Size->first++;//cnt files
            Count_Size->second += fileInfo.size();//all size

            //suffix group
            bool new_suffix = 1;
            for(quint64 vec_it(0); vec_it < vec->size(); vec_it++){
                if((*vec)[vec_it].name == fileInfo.suffix()){
                    (*vec)[vec_it].cnt++;
                    (*vec)[vec_it].size += fileInfo.size();
                    new_suffix=0;
                }
            }
            if(new_suffix)
                vec->push_back({fileInfo.suffix(),1,fileInfo.size()});            
        }
    }

    if(!stop && !exit) emit return_size(*Count_Size);
    return true;
}


void statistic::set_stop(const bool i){
    stop = i;
}

bool statistic::get_stop(){
    return stop;
}

void statistic::set_exit(const bool i){
    exit = i;
}


