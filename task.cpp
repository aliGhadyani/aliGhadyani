#include "task.h"
#include "definitions.h"
#include <QLabel>
#include <QCheckBox>
#include <QComboBox>
#include <QFrame>
#include <QLayout>
#include <QColor>
#include <QJsonObject>
#include <QJsonArray>
#include <QDateTime>


Task::Task(QWidget *parent):QWidget(parent)
{/*
  connect(this , SIGNAL(clicked()), this, SLOT(onClick()));
  Hframe = new QFrame();
  Hframe->setFrameStyle(QFrame::StyledPanel);
  QRect frameSize;
  frameSize.setWidth(350);
  frameSize.setHeight(50);
  Hframe->setGeometry(frameSize);
  newTask = new QHBoxLayout(Hframe);
  Hframe->setLayout(newTask);
  Vframe = new QFrame();
  taskDetails = new QVBoxLayout(Vframe);
  Vframe->setLayout(taskDetails);

  // details and properties of task
  check = new QCheckBox("Finished", this);
  if(task->value("Status").toString() == "Checked"){
      check->setCheckState(Qt::CheckState::Checked);
    }
  taskDetails->addWidget(check);
  taskTitle = new QLabel("Title: "+task->value("Title").toString());
  taskTitle->setStyleSheet("QLabel {width:30; height:20;}");
  taskTitle->setSizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
  taskDetails->addWidget(taskTitle);
  taskDesc = new QLabel("Description: "+task->value("Desc").toString());
  taskTitle->setStyleSheet("QLabel {width:30; height:20;}");
  taskTitle->setSizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
  taskDetails->addWidget(taskDesc);
  taskCrDate = new QLabel("Creat Time: "+task->value("CrDate").toString(timeFormat));
  taskTitle->setStyleSheet("QLabel {width:30; height:20;}");
  taskTitle->setSizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
  taskDetails->addWidget(taskCrDate);
  taskPriority = new QLabel("Priority: "+task->value("Priority").toString());
  taskPriority->setStyleSheet("QLabel {width:30; height:20;}");
  taskPriority->setSizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
  taskDetails->addWidget(taskPriority);
  newTask->insertWidget(0, Vframe);
  newTask->setAlignment(Qt::AlignTop);
  Hframe->setSizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
  //QMouseEvent *mouseEvent = new QMouseEvent();
  Hframe->setStyleSheet("background-color: rgb(200,250,250)");*/
}

Task::~Task(){

}
/*
void Task::setTask(QJsonObject *task, int idx){
  if(task->value("Status").toString() == "Checked"){
      this->taskStatus->setCheckState(Qt::CheckState::Checked);
    }
  this->taskPriority->setText(task->value("Priority").toString());
  this->taskTitle->setText(task->value("Title").toString());
  this->taskCrDate->setText(QDateTime::fromString(task->value("CrDate").toString(), timeFormat));
  this->taskDesc->setText(task->value("Desc").toString());
  this->taskIdx = idx;
}

void Task::onClick(){
  emit select(this);
}*/

