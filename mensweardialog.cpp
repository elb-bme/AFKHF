#include "mensweardialog.h"
#include "ui_mensweardialog.h"

MenswearDialog::MenswearDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MenswearDialog)
{
    ui->setupUi(this);
}

MenswearDialog::~MenswearDialog()
{
    delete ui;
}

void MenswearDialog::on_mensFinishButton_clicked()
{

}

