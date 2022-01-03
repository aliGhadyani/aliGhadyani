#ifndef TASKDETAIL_H
#define TASKDETAIL_H

#include <QDialog>
#include <QJsonObject>
#include <QJsonArray>

namespace Ui {
  class TaskDetail;
}

class TaskDetail : public QDialog
{
  Q_OBJECT

public:
  explicit TaskDetail(QWidget *parent = 0);
  ~TaskDetail();
  void setTask(QJsonObject *tp, bool *done, QJsonArray priorities);

signals:
  void addNewPriorityLevel(QString * arg);

private slots:
  void on_cancelButton_clicked();

  void on_applyButton_clicked();

  void on_comboBox_currentTextChanged(const QString &arg1);

private:
  Ui::TaskDetail *ui;
  QJsonObject *task;
  bool *finish = false;
};

#endif // TASKDETAIL_H
