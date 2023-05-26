#include "furnituredialog.h"
#include "mainwindow.h"
#include "ui_furnituredialog.h"
#include "QNetworkAccessManager"
#include <QNetworkReply>
#include <QNetworkRequest>
#include "qnetworkrequest.h"

FurnitureDialog::FurnitureDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FurnitureDialog)
{
    ui->setupUi(this);
}

FurnitureDialog::~FurnitureDialog()
{
    delete ui;
}

void FurnitureDialog::on_furFinishButton_clicked()
{
    QNetworkAccessManager *mManager = new QNetworkAccessManager(this);

    QUrl url("http://localhost:8080/furniture");
    QString str = QString("{\"chair\":%1,\"name\":\"%2\",\"table\":%3,\"shelf\":%4}")
                      .arg(ui->chairCheckBox->isChecked()).arg(ui->furLineEdit->text()).arg(ui->tableCheckBox->isChecked()).arg(ui->shelfCheckBox->isChecked());
    QByteArray array(str.toLatin1());
    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader,QVariant("application/json"));
    mManager->post(request,array);
}

