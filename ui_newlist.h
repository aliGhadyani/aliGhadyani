/********************************************************************************
** Form generated from reading UI file 'newlist.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWLIST_H
#define UI_NEWLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_NewList
{
public:
    QFrame *frame;
    QLabel *label;
    QTextEdit *textEdit;
    QFrame *frame_2;

    void setupUi(QDialog *NewList)
    {
        if (NewList->objectName().isEmpty())
            NewList->setObjectName(QStringLiteral("NewList"));
        NewList->resize(400, 300);
        frame = new QFrame(NewList);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 381, 41));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 10, 61, 21));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(70, 10, 301, 21));
        textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        frame_2 = new QFrame(NewList);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 50, 111, 131));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);

        retranslateUi(NewList);

        QMetaObject::connectSlotsByName(NewList);
    } // setupUi

    void retranslateUi(QDialog *NewList)
    {
        NewList->setWindowTitle(QApplication::translate("NewList", "Dialog", 0));
        label->setText(QApplication::translate("NewList", "List Name:", 0));
    } // retranslateUi

};

namespace Ui {
    class NewList: public Ui_NewList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWLIST_H
