#ifndef MENSWEARDIALOG_H
#define MENSWEARDIALOG_H

#include <QDialog>

namespace Ui {
class MenswearDialog;
class QNetworkAccessManager;
}

class MenswearDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MenswearDialog(QWidget *parent = nullptr);
    ~MenswearDialog();

private slots:
    void on_mensFinishButton_clicked();

private:
    Ui::MenswearDialog *ui;
};

#endif // MENSWEARDIALOG_H
