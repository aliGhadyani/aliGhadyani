#include "taskdetail.h"
#include "ui_taskdetail.h"
#include "definitions.h"
#include <QJsonArray>
#include <QJsonObject>
#include <QDebug>

TaskDetail::TaskDetail(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::TaskDetail)
{
  ui->setupUi(this);
}

TaskDetail::~TaskDetail()
{
  delete ui;
  delete task;
  delete finish;
}

void TaskDetail::on_cancelButton_clicked()
{
  *finish = false;
  this->close();
}

void TaskDetail::setTask(QJsonObject *tp, bool *done, QJsonArray priorities){
  task = tp;
  ui->lineEdit->setText(task->value("Title").toString());
  ui->lineEdit_2->setText(task->value("Desc").toString());
  if(task->value("DeadLn").toString(timeFormat) == ""){
      ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime());
    } else {
      ui->dateTimeEdit->setDateTime(QDateTime::fromString(task->value("DeadLn").toString(), timeFormat));
    }
  finish = done;
  for(int i=0; i<priorities.size(); i++){
      QIcon p;
      QVariant v;
      ui->comboBox->addItem(p, priorities[i].toString(), v);
    }
  ui->comboBox->setCurrentText(task->value("Priority").toString());
  QIcon p;
  QVariant v;
  ui->comboBox->addItem(p, "Add new level", v);
}

void TaskDetail::on_applyButton_clicked()
{
  task->insert("Title", ui->lineEdit->text());
  task->insert("Desc", ui->lineEdit_2->text());
  task->insert("DeadLn", ui->dateTimeEdit->dateTime().toString(timeFormat));
  task->insert("MfDate", QDateTime::currentDateTime().toString(timeFormat));
  if(task->value("CrDate").toString(timeFormat) == ""){
      task->insert("CrDate", QDateTime::currentDateTime().toString(timeFormat));
    }
  *finish = true;
  this->close();
}

void TaskDetail::on_comboBox_currentTextChanged(const QString &arg1)
{
    if(arg1 == "Add New Level"){
        QString * text = new QString();
        *text = arg1;
        emit addNewPriorityLevel(text);
      }
}
