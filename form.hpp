#pragma once

#include <QWidget>

class QDateEdit;
class QLineEdit;
class QPushButton;
class QTextEdit;

class Form: public QWidget
{
  Q_OBJECT

  public:
    Form(QWidget* = nullptr);

  private:
    void createWidgets();
    void arrangeWidgets();
    QLineEdit* name;
    QDateEdit* dateOfBirth;
    QTextEdit* comments;
    QPushButton* send;
};
