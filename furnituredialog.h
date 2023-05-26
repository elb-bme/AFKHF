#ifndef FURNITUREDIALOG_H
#define FURNITUREDIALOG_H

#include <QDialog>

namespace Ui {
class FurnitureDialog;
class QNetworkAccessManager;

}

class FurnitureDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FurnitureDialog(QWidget *parent = nullptr);
    ~FurnitureDialog();

private slots:
    void on_furFinishButton_clicked();

private:
    Ui::FurnitureDialog *ui;
};

#endif // FURNITUREDIALOG_H
