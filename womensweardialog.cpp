#include "womensweardialog.h"
#include "mainwindow.h"
#include "ui_womensweardialog.h"
#include "QNetworkAccessManager"
#include <QNetworkReply>
#include <QNetworkRequest>
#include "qnetworkrequest.h"

WomenswearDialog::WomenswearDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WomenswearDialog)
{
    ui->setupUi(this);
}

WomenswearDialog::~WomenswearDialog()
{
    delete ui;
}

void WomenswearDialog::on_woFinishButton_clicked()
{
    QNetworkAccessManager *mManager = new QNetworkAccessManager(this);

    QUrl url("http://localhost:8080/womenswear");
    QString str = QString("{\"top\":%1,\"name\":\"%2\",\"skirt\":%3,\"bag\":%4,\"bikini\":%5}")
                      .arg(ui->topCheckBox->isChecked()).arg(ui->woLineEdit->text()).arg(ui->skirtCheckBox->isChecked()).arg(ui->bagCheckBox->isChecked()).arg(ui->bikiniCheckBox->isChecked());
    QByteArray array(str.toLatin1());
    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader,QVariant("application/json"));
    mManager->post(request,array);
}

