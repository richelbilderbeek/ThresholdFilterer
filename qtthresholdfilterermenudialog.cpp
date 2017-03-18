#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Weffc++"
#include "qtthresholdfilterermenudialog.h"

#include <cassert>

#include "thresholdfilterermenudialog.h"
#include "qtaboutdialog.h"
#include "qtthresholdfilterermaindialog.h"


#include "ui_qtthresholdfilterermenudialog.h"
#pragma GCC diagnostic pop

ribi::QtThresholdFiltererMenuDialog::QtThresholdFiltererMenuDialog(QWidget *parent) :
  QtHideAndShowDialog(parent),
  ui(new Ui::QtThresholdFiltererMenuDialog)
{
  ui->setupUi(this);
}

ribi::QtThresholdFiltererMenuDialog::~QtThresholdFiltererMenuDialog() noexcept
{
  delete ui;
}

void ribi::QtThresholdFiltererMenuDialog::on_button_start_clicked()
{
  QtThresholdFiltererMainDialog d;
  this->ShowChild(&d);
}

void ribi::QtThresholdFiltererMenuDialog::on_button_about_clicked()
{
  QtAboutDialog d(ThresholdFiltererMenuDialog().GetAbout());
  this->ShowChild(&d);
}

void ribi::QtThresholdFiltererMenuDialog::on_button_quit_clicked()
{
  this->close();
}
