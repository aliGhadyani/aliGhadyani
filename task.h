#ifndef TASK_H
#define TASK_H

#include <QFrame>
#include <QWidget>
#include <QCheckBox>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QObject>

namespace Ui {
  class Task;
}

class Task : public QWidget
{
  Q_OBJECT

public:
  explicit Task(QWidget *parent=0);
  ~Task();
  //void setTask(QJsonObject *task, int idx);

//public slots:
  //void onClick();

//signals:
  //void select(Task *arg);

/*public:
  int taskIdx;
  QCheckBox *check;
  QLabel *taskTitle;
  QLabel *taskPriority;
  QLabel *taskDesc;
  QLabel *taskCrDate;
  QHBoxLayout *newTask;
  QVBoxLayout *Vframe;
  QVBoxLayout *taskDetails;
  QFrame* Hframe;*/
private:
  int i;

};

#endif // TASK_H

