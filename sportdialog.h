#ifndef SPORTDIALOG_H
#define SPORTDIALOG_H

#include <QDialog>

namespace Ui {
class SportDialog;
}

class SportDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SportDialog(QWidget *parent = nullptr);
    ~SportDialog();

private slots:
    void on_spFinishButton_clicked();

private:
    Ui::SportDialog *ui;
};

#endif // SPORTDIALOG_H
