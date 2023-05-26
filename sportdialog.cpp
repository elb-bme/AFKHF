#include "sportdialog.h"
#include "ui_sportdialog.h"

SportDialog::SportDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SportDialog)
{
    ui->setupUi(this);
}

SportDialog::~SportDialog()
{
    delete ui;
}

void SportDialog::on_spFinishButton_clicked()
{

}

