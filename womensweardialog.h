#ifndef WOMENSWEARDIALOG_H
#define WOMENSWEARDIALOG_H

#include <QDialog>

namespace Ui {
class WomenswearDialog;
class QNetworkAccessManager;

}

class WomenswearDialog : public QDialog
{
    Q_OBJECT

public:
    explicit WomenswearDialog(QWidget *parent = nullptr);
    ~WomenswearDialog();

private slots:
    void on_woFinishButton_clicked();

private:
    Ui::WomenswearDialog *ui;
};

#endif // WOMENSWEARDIALOG_H
