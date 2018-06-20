/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QSplitter *splitter;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QTreeView *treeView;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_dir;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_load_size;
    QLabel *label_full_size;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_dir;
    QLabel *label_dir_cnt;
    QGroupBox *groupBox_suff;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_load_suff;
    QLabel *label_cnt_cuff;
    QTreeWidget *treeWidget;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(958, 573);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/img/folder3.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(5);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(5, 5, 5, 5);
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(4);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        treeView = new QTreeView(verticalLayoutWidget);
        treeView->setObjectName(QStringLiteral("treeView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(treeView->sizePolicy().hasHeightForWidth());
        treeView->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(treeView);

        splitter->addWidget(verticalLayoutWidget);
        verticalLayoutWidget_2 = new QWidget(splitter);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        groupBox_dir = new QGroupBox(verticalLayoutWidget_2);
        groupBox_dir->setObjectName(QStringLiteral("groupBox_dir"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_dir->sizePolicy().hasHeightForWidth());
        groupBox_dir->setSizePolicy(sizePolicy1);
        gridLayout_3 = new QGridLayout(groupBox_dir);
        gridLayout_3->setSpacing(2);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(6, 1, 2, 1);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_load_size = new QLabel(groupBox_dir);
        label_load_size->setObjectName(QStringLiteral("label_load_size"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_load_size->sizePolicy().hasHeightForWidth());
        label_load_size->setSizePolicy(sizePolicy2);
        label_load_size->setMinimumSize(QSize(15, 15));
        label_load_size->setMaximumSize(QSize(15, 15));

        horizontalLayout->addWidget(label_load_size);

        label_full_size = new QLabel(groupBox_dir);
        label_full_size->setObjectName(QStringLiteral("label_full_size"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_full_size->sizePolicy().hasHeightForWidth());
        label_full_size->setSizePolicy(sizePolicy3);
        label_full_size->setMinimumSize(QSize(0, 15));
        label_full_size->setMaximumSize(QSize(16777215, 15));

        horizontalLayout->addWidget(label_full_size);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_dir = new QLabel(groupBox_dir);
        label_dir->setObjectName(QStringLiteral("label_dir"));
        sizePolicy2.setHeightForWidth(label_dir->sizePolicy().hasHeightForWidth());
        label_dir->setSizePolicy(sizePolicy2);
        label_dir->setMinimumSize(QSize(15, 15));
        label_dir->setMaximumSize(QSize(15, 15));

        horizontalLayout_2->addWidget(label_dir);

        label_dir_cnt = new QLabel(groupBox_dir);
        label_dir_cnt->setObjectName(QStringLiteral("label_dir_cnt"));
        sizePolicy3.setHeightForWidth(label_dir_cnt->sizePolicy().hasHeightForWidth());
        label_dir_cnt->setSizePolicy(sizePolicy3);
        label_dir_cnt->setMinimumSize(QSize(0, 15));
        label_dir_cnt->setMaximumSize(QSize(16777215, 15));

        horizontalLayout_2->addWidget(label_dir_cnt);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        groupBox_suff = new QGroupBox(groupBox_dir);
        groupBox_suff->setObjectName(QStringLiteral("groupBox_suff"));
        groupBox_suff->setEnabled(false);
        groupBox_suff->setFlat(false);
        gridLayout = new QGridLayout(groupBox_suff);
        gridLayout->setSpacing(2);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(2, 2, 2, 2);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_load_suff = new QLabel(groupBox_suff);
        label_load_suff->setObjectName(QStringLiteral("label_load_suff"));
        sizePolicy2.setHeightForWidth(label_load_suff->sizePolicy().hasHeightForWidth());
        label_load_suff->setSizePolicy(sizePolicy2);
        label_load_suff->setMinimumSize(QSize(15, 15));
        label_load_suff->setMaximumSize(QSize(15, 15));

        horizontalLayout_3->addWidget(label_load_suff);

        label_cnt_cuff = new QLabel(groupBox_suff);
        label_cnt_cuff->setObjectName(QStringLiteral("label_cnt_cuff"));
        sizePolicy3.setHeightForWidth(label_cnt_cuff->sizePolicy().hasHeightForWidth());
        label_cnt_cuff->setSizePolicy(sizePolicy3);
        label_cnt_cuff->setMinimumSize(QSize(0, 15));
        label_cnt_cuff->setMaximumSize(QSize(16777215, 15));

        horizontalLayout_3->addWidget(label_cnt_cuff);


        verticalLayout_2->addLayout(horizontalLayout_3);

        treeWidget = new QTreeWidget(groupBox_suff);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setSortingEnabled(false);
        treeWidget->header()->setCascadingSectionResizes(true);
        treeWidget->header()->setDefaultSectionSize(70);
        treeWidget->header()->setMinimumSectionSize(30);

        verticalLayout_2->addWidget(treeWidget);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_suff, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        label = new QLabel(groupBox_dir);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(7);
        font.setItalic(true);
        label->setFont(font);

        horizontalLayout_4->addWidget(label);


        gridLayout_3->addLayout(horizontalLayout_4, 1, 0, 1, 1);


        verticalLayout_4->addWidget(groupBox_dir);

        splitter->addWidget(verticalLayoutWidget_2);

        gridLayout_4->addWidget(splitter, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Folder Info", nullptr));
        groupBox_dir->setTitle(QApplication::translate("MainWindow", "dir", nullptr));
        label_load_size->setText(QString());
        label_full_size->setText(QString());
        label_dir->setText(QString());
        label_dir_cnt->setText(QString());
        groupBox_suff->setTitle(QString());
        label_load_suff->setText(QString());
        label_cnt_cuff->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\320\275\320\270\320\271 \321\200\320\260\320\267\320\274\320\265\321\200", nullptr));
        ___qtreewidgetitem->setText(2, QApplication::translate("MainWindow", "\320\236\320\261\321\211\320\270\320\271 \321\200\320\260\320\267\320\274\320\265\321\200", nullptr));
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "\320\240\320\260\321\201\321\210\320\270\321\200\320\265\320\275\320\270\320\265", nullptr));
        label->setText(QApplication::translate("MainWindow", "2018 Gorelov N.A.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
