/********************************************************************************
** Form generated from reading UI file 'taskdetail.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKDETAIL_H
#define UI_TASKDETAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TaskDetail
{
public:
    QFrame *frame;
    QLabel *label;
    QLineEdit *lineEdit;
    QFrame *frame_2;
    QPushButton *applyButton;
    QPushButton *cancelButton;
    QFrame *frame_3;
    QLabel *label_2;
    QDateTimeEdit *dateTimeEdit;
    QFrame *frame_4;
    QLabel *label_3;
    QComboBox *comboBox;
    QFrame *frame_5;
    QLabel *label_4;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *TaskDetail)
    {
        if (TaskDetail->objectName().isEmpty())
            TaskDetail->setObjectName(QStringLiteral("TaskDetail"));
        TaskDetail->resize(382, 281);
        frame = new QFrame(TaskDetail);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 361, 41));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 61, 16));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(40, 10, 311, 20));
        frame_2 = new QFrame(TaskDetail);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(199, 229, 171, 41));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        applyButton = new QPushButton(frame_2);
        applyButton->setObjectName(QStringLiteral("applyButton"));
        applyButton->setGeometry(QRect(90, 10, 75, 23));
        cancelButton = new QPushButton(frame_2);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(10, 10, 75, 23));
        frame_3 = new QFrame(TaskDetail);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(10, 50, 201, 41));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 61, 16));
        label_2->setFont(font);
        dateTimeEdit = new QDateTimeEdit(frame_3);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(70, 10, 121, 22));
        frame_4 = new QFrame(TaskDetail);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(210, 50, 161, 41));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 10, 47, 13));
        label_3->setFont(font);
        comboBox = new QComboBox(frame_4);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(60, 10, 91, 22));
        frame_5 = new QFrame(TaskDetail);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(10, 90, 361, 141));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame_5);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 0, 81, 21));
        label_4->setFont(font);
        lineEdit_2 = new QLineEdit(frame_5);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(10, 20, 341, 111));
        lineEdit_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        retranslateUi(TaskDetail);

        QMetaObject::connectSlotsByName(TaskDetail);
    } // setupUi

    void retranslateUi(QDialog *TaskDetail)
    {
        TaskDetail->setWindowTitle(QApplication::translate("TaskDetail", "Dialog", 0));
        label->setText(QApplication::translate("TaskDetail", "title:", 0));
        applyButton->setText(QApplication::translate("TaskDetail", "Apply", 0));
        cancelButton->setText(QApplication::translate("TaskDetail", "Cancel", 0));
        label_2->setText(QApplication::translate("TaskDetail", "Deadline:", 0));
        label_3->setText(QApplication::translate("TaskDetail", "Priority:", 0));
        label_4->setText(QApplication::translate("TaskDetail", "Description:", 0));
    } // retranslateUi

};

namespace Ui {
    class TaskDetail: public Ui_TaskDetail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKDETAIL_H
