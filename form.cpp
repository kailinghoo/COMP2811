#include <QtWidgets>
#include "form.hpp"


Form::Form(QWidget* parent): QWidget(parent)
{
  createWidgets();
  arrangeWidgets();
}


void Form::createWidgets()
{
  name = new QLineEdit();
  dateOfBirth = new QDateEdit();
  comments = new QTextEdit();
  send = new QPushButton(tr("Send"));

  QFont font("Helvetica", 18);
  name->setFont(font);
  dateOfBirth->setFont(font);
  comments->setFont(font);
  send->setFont(font);
}


void Form::arrangeWidgets()
{
  QFormLayout* form = new QFormLayout();
  form->addRow(tr("&Name:"), name);
  form->addRow(tr("&Date of Birth:"), dateOfBirth);
  form->addRow(tr("&Comments:"), comments);

  QFont font("Helvetica", 18);
  form->labelForField(name)->setFont(font);
  form->labelForField(dateOfBirth)->setFont(font);
  form->labelForField(comments)->setFont(font);

  QVBoxLayout* box = new QVBoxLayout();
  box->addLayout(form);
  box->addWidget(send);

  setLayout(box);
}
