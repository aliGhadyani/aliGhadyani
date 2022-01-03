/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_List;
    QAction *actionOpen_List;
    QAction *actionExit;
    QAction *actionSave_List;
    QAction *actionSave_List_as;
    QWidget *centralWidget;
    QFrame *frame;
    QLabel *label;
    QFrame *frame_2;
    QPushButton *NewTask;
    QPushButton *editTask;
    QPushButton *deleteTask;
    QFrame *frame_3;
    QScrollArea *scroll;
    QWidget *tasks;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QMenu *menuFile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(400, 500);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rsc/icons8-to-do-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionNew_List = new QAction(MainWindow);
        actionNew_List->setObjectName(QStringLiteral("actionNew_List"));
        actionOpen_List = new QAction(MainWindow);
        actionOpen_List->setObjectName(QStringLiteral("actionOpen_List"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionSave_List = new QAction(MainWindow);
        actionSave_List->setObjectName(QStringLiteral("actionSave_List"));
        actionSave_List_as = new QAction(MainWindow);
        actionSave_List_as->setObjectName(QStringLiteral("actionSave_List_as"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 0, 381, 41));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 361, 21));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 40, 381, 41));
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        NewTask = new QPushButton(frame_2);
        NewTask->setObjectName(QStringLiteral("NewTask"));
        NewTask->setGeometry(QRect(10, 10, 81, 21));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/rsc/icons8-task-30.png"), QSize(), QIcon::Normal, QIcon::Off);
        NewTask->setIcon(icon1);
        editTask = new QPushButton(frame_2);
        editTask->setObjectName(QStringLiteral("editTask"));
        editTask->setGeometry(QRect(100, 10, 81, 21));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/rsc/icons8-edit-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        editTask->setIcon(icon2);
        deleteTask = new QPushButton(frame_2);
        deleteTask->setObjectName(QStringLiteral("deleteTask"));
        deleteTask->setGeometry(QRect(190, 10, 91, 21));
        sizePolicy.setHeightForWidth(deleteTask->sizePolicy().hasHeightForWidth());
        deleteTask->setSizePolicy(sizePolicy);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/rsc/icons8-delete-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteTask->setIcon(icon3);
        frame_3 = new QFrame(centralWidget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(10, 80, 380, 390));
        sizePolicy.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy);
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        scroll = new QScrollArea(frame_3);
        scroll->setObjectName(QStringLiteral("scroll"));
        scroll->setGeometry(QRect(0, 0, 380, 390));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scroll->sizePolicy().hasHeightForWidth());
        scroll->setSizePolicy(sizePolicy1);
        scroll->setWidgetResizable(true);
        tasks = new QWidget();
        tasks->setObjectName(QStringLiteral("tasks"));
        tasks->setGeometry(QRect(0, 0, 378, 388));
        verticalLayout = new QVBoxLayout(tasks);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(350, 380, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        scroll->setWidget(tasks);
        MainWindow->setCentralWidget(centralWidget);
        frame_3->raise();
        frame_2->raise();
        frame->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);
        QWidget::setTabOrder(NewTask, editTask);
        QWidget::setTabOrder(editTask, deleteTask);
        QWidget::setTabOrder(deleteTask, scroll);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionNew_List);
        menuFile->addSeparator();
        menuFile->addAction(actionOpen_List);
        menuFile->addSeparator();
        menuFile->addAction(actionSave_List);
        menuFile->addAction(actionSave_List_as);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "To Do List", 0));
        actionNew_List->setText(QApplication::translate("MainWindow", "&New List", 0));
        actionNew_List->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        actionOpen_List->setText(QApplication::translate("MainWindow", "&Open List", 0));
        actionOpen_List->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        actionExit->setText(QApplication::translate("MainWindow", "&Exit", 0));
        actionExit->setShortcut(QApplication::translate("MainWindow", "Esc, Esc", 0));
        actionSave_List->setText(QApplication::translate("MainWindow", "&Save List", 0));
        actionSave_List->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        actionSave_List_as->setText(QApplication::translate("MainWindow", "Save List &as ..", 0));
        actionSave_List_as->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", 0));
        label->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        NewTask->setText(QApplication::translate("MainWindow", "New Task", 0));
        editTask->setText(QApplication::translate("MainWindow", "Edit Task", 0));
        deleteTask->setText(QApplication::translate("MainWindow", "Delete Task", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
