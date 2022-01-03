#include "mainwindow.h"
#include "taskdetail.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QDateTime>
#include <QMessageBox>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonValue>
#include <vector>
#include <QDebug>
#include <QBoxLayout>
#include <QVBoxLayout>
#include "definitions.h"
#include <qobject.h>
#include <QCheckBox>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  this->setMaximumWidth(400);
  this->setMaximumHeight(500);
}

MainWindow::~MainWindow()
{
  delete ui;
}


/*
  QFrame* Hframe = new QFrame();
  Hframe->setFrameStyle(QFrame::StyledPanel);
  QRect frameSize;
  frameSize.setWidth(350);
  frameSize.setHeight(50);
  Hframe->setGeometry(frameSize);
  QHBoxLayout* newTask = new QHBoxLayout(Hframe);
  Hframe->setLayout(newTask);
  QFrame* Vframe = new QFrame();
  QVBoxLayout* taskDetails = new QVBoxLayout(Vframe);
  Vframe->setLayout(taskDetails);

  // details and properties of task
  QCheckBox *check = new QCheckBox("Finished", this);
  if(task->value("Status").toString() == "Checked"){
      check->setCheckState(Qt::CheckState::Checked);
    }
  taskDetails->addWidget(check);
  QLabel* taskTitle = new QLabel("Title: "+task->value("Title").toString());
  taskTitle->setStyleSheet("QLabel {width:30; height:20;}");
  taskTitle->setSizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
  taskDetails->addWidget(taskTitle);
  QLabel* taskDesc = new QLabel("Description: "+task->value("Desc").toString());
  taskTitle->setStyleSheet("QLabel {width:30; height:20;}");
  taskTitle->setSizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
  taskDetails->addWidget(taskDesc);
  QLabel* taskCrDate = new QLabel("Creat Time: "+task->value("CrDate").toString(timeFormat));
  taskTitle->setStyleSheet("QLabel {width:30; height:20;}");
  taskTitle->setSizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
  taskDetails->addWidget(taskCrDate);
  QLabel* taskPriority = new QLabel("Priority: "+task->value("Priority").toString());
  taskPriority->setStyleSheet("QLabel {width:30; height:20;}");
  taskPriority->setSizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
  taskDetails->addWidget(taskPriority);

  newTask->insertWidget(0, Vframe);
  newTask->setAlignment(Qt::AlignTop);
  Hframe->setSizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
  //QMouseEvent *mouseEvent = new QMouseEvent();
  Hframe->setStyleSheet("background-color: rgb(200,250,250)");*/


// buttons action
// click on new task button
void MainWindow::on_NewTask_clicked()
{
  QJsonObject *b = new QJsonObject();
  QString temp = tempFile;
  *b = list["Rows"].toArray()[1].toObject();
  TaskDetail *td;
  td = new TaskDetail(this);
  connect(td, SIGNAL(addNewPriorityLevel(QString*)), this, SLOT(newPriorityLevel(QString*)));
  bool done = true;
  td->setTask(b, &done, list["Priorities"].toArray());
  td->exec();
  while(td->isVisible());
  if(!done){
      qDebug() << "Operation canceled";
      delete b;
      return;
    }
  list["RowCount"] = list["RowCount"].toInt()+1;
  QJsonArray a = list["Rows"].toArray();
  a.append(*b);
  list["Rows"] = a;
  this->addTaskToList(b);
  delete b;
  return;
}

// this function adds listed tasks to scroll area
void MainWindow::addTaskToList(QJsonObject *task){
  // contents of scroll area
  QVBoxLayout* vMainLayout = qobject_cast<QVBoxLayout*>(ui->tasks->layout());
  QFrame* Hframe = new QFrame();
  Hframe->setFrameStyle(QFrame::StyledPanel);
  QRect frameSize;
  frameSize.setWidth(350);
  frameSize.setHeight(50);
  Hframe->setGeometry(frameSize);
  QHBoxLayout* newTask = new QHBoxLayout(Hframe);
  Hframe->setLayout(newTask);
  QFrame* Vframe = new QFrame();
  QVBoxLayout* taskDetails = new QVBoxLayout(Vframe);
  Vframe->setLayout(taskDetails);

  // details and properties of task
  QCheckBox *check = new QCheckBox("Finished", this);
  if(task->value("Status").toString() == "Checked"){
      check->setCheckState(Qt::CheckState::Checked);
    }
  taskDetails->addWidget(check);
  QLabel* taskTitle = new QLabel("Title: "+task->value("Title").toString());
  taskTitle->setStyleSheet("QLabel {width:30; height:20;}");
  taskTitle->setSizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
  taskDetails->addWidget(taskTitle);
  QLabel* taskDesc = new QLabel("Description: "+task->value("Desc").toString());
  taskTitle->setStyleSheet("QLabel {width:30; height:20;}");
  taskTitle->setSizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
  taskDetails->addWidget(taskDesc);
  QLabel* taskCrDate = new QLabel("Creat Time: "+task->value("CrDate").toString(timeFormat));
  taskTitle->setStyleSheet("QLabel {width:30; height:20;}");
  taskTitle->setSizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
  taskDetails->addWidget(taskCrDate);
  QLabel* taskPriority = new QLabel("Priority: "+task->value("Priority").toString());
  taskPriority->setStyleSheet("QLabel {width:30; height:20;}");
  taskPriority->setSizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
  taskDetails->addWidget(taskPriority);

  newTask->insertWidget(0, Vframe);
  newTask->setAlignment(Qt::AlignTop);
  Hframe->setSizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
  //QMouseEvent *mouseEvent = new QMouseEvent();
  Hframe->setStyleSheet("background-color: rgb(200,250,250)");
  vMainLayout->insertWidget(vMainLayout->count(), Hframe);
  ui->tasks->setLayout(vMainLayout);
  return;
}

//// click on delete task button
void MainWindow::on_deleteTask_clicked()
{
  QVBoxLayout *vMainLayout = qobject_cast<QVBoxLayout*>(ui->tasks->layout());
  QLayoutItem *item = vMainLayout->itemAt(1);
  vMainLayout->removeItem(item);
  delete item;
}







// internal functions
// swap function for sort QJsonArray
inline void swap(QJsonValueRef v1, QJsonValueRef v2)
{
  QJsonValue temp(v1);
  v1 = QJsonValue(v2);
  v2 = temp;
}

// sort tasks by priority than creation date
void MainWindow::sort1(){
  QJsonArray arr = list["Rows"].toArray();

  std::sort(arr.begin(), arr.end(), [](const QJsonValue &v1, const QJsonValue &v2) {
      if(v1.toObject()["Priority"].toInt() == v2.toObject()["Priority"].toInt()){
          return v1.toObject()["CrDate"].toString() < v2.toObject()["CrDate"].toString();
        }
      return v1.toObject()["Priority"].toInt() < v2.toObject()["Priority"].toInt();
    });

  list["Rows"] = arr;
}




//// signal handlers
void MainWindow::newPriorityLevel(QString *arg){
  qDebug() << *arg;
}

//void MainWindow::selectTask(Task *arg){
//  this->selectedIdx = arg->taskIdx;
//  this->selectedTask = arg;
//}



// Menu bar options
// exit option of menubar
void MainWindow::on_actionExit_triggered()
{
  this->close();
}

//// save as option of menubar
void MainWindow::on_actionSave_List_as_triggered()
{
  QString format = "JSON (*.json)";
  QString adr = QFileDialog::getSaveFileName(this, "Save as..", "/", format, &format);
  if(adr == ""){
      QMessageBox *error = new QMessageBox();
      error->setText("not valid path!");
      error->show();
      return;
    }
  Adr = adr;
  QJsonDocument doc;
  doc.setObject(list);
  QFile output(Adr);
  if(output.open(QIODevice::WriteOnly | QIODevice::Text)){
      output.write(doc.toJson(QJsonDocument::Indented));
      output.close();
      return;
    } else {
      QMessageBox *error = new QMessageBox();
      error->setText("Error in saving file!");
      error->show();
      return;
    }
}

// save option of menubar
void MainWindow::on_actionSave_List_triggered()
{
  QJsonDocument doc;
  doc.setObject(list);
  QFile output(Adr);
  if(output.open(QIODevice::WriteOnly | QIODevice::Text)){
      output.write(doc.toJson(QJsonDocument::Indented));
      output.close();
      return;
    } else {
      QMessageBox *error = new QMessageBox();
      error->setText("Error in saving file!");
      error->show();
      return;
    }
}

//// open option of menubar
void MainWindow::on_actionOpen_List_triggered()
{
  QFile input;
  QString format = "JSON (*.json)";
  QString adr = QFileDialog::getOpenFileName(this, "Open List", "c:/users/ghadyani/desktop", format, &format);
  if(adr == ""){
      return;
    }
  input.setFileName(adr);
  Adr = adr;
  if(input.open(QIODevice::ReadOnly | QIODevice::Text)){
      QByteArray data = input.readAll();
      QJsonDocument doc = QJsonDocument::fromJson(data);
      QJsonObject obj = doc.object();
      if(obj["FileType"].toString() != fileType){
          QMessageBox *error = new QMessageBox();
          error->setText("not a ToDoList!");
          error->exec();
          delete error;
          return;
        }
      list = obj;
      ui->label->setText(list["ListName"].toString());
      sort1();
      QJsonArray sort = list["Rows"].toArray();
      int sep = list["Seprator"].toInt();
      QVBoxLayout* vMainLayout = qobject_cast<QVBoxLayout*>(ui->tasks->layout());
      //int count = vMainLayout->count();
      while(vMainLayout->count()>0 && vMainLayout!=NULL){
          QLayoutItem *item = vMainLayout->itemAt(0);
          vMainLayout->removeItem(item);
          QWidget *w;
          w = item->widget();
          w->deleteLater();
          delete item;
        }

      for(int i=0; i<sort.size(); i++){
          if(i==sep){
              //
            }
          QJsonObject *b = new QJsonObject();
          *b = sort[i].toObject();
          this->addTaskToList(b);
          delete b;
        }
      return;
    } else {
      QMessageBox *error = new QMessageBox();
      error->setText("Error in openning file!");
      error->exec();
      delete error;
      return;
    }
}

