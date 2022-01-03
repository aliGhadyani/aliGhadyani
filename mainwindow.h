#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <task.h>
#include <QMainWindow>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonValue>
#include <vector>
#include <QFrame>
#include <QLabel>
#include <QCheckBox>

namespace Ui {
  class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

private:
  void sort1();

private slots:
  void on_NewTask_clicked();
  void addTaskToList(QJsonObject *task);
  void on_actionExit_triggered();
  void on_actionOpen_List_triggered();
  void on_actionSave_List_triggered();
  void on_actionSave_List_as_triggered();
  void on_deleteTask_clicked();
  void newPriorityLevel(QString* arg);
  //void selectTask(Task *arg);

private:
  Ui::MainWindow *ui;
  QJsonObject list;
  QString Adr;
  int selectedIdx = -1;
  //Task *selectedTask;
};

#endif // MAINWINDOW_H
