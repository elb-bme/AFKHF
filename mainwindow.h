#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class QNetworkAccessManager;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_mensButton_clicked();

    void on_woButton_clicked();

    void on_spButton_clicked();

    void on_infoButton_clicked();

    void on_furButton_clicked();

private:
    Ui::MainWindow *ui;
    QNetworkAccessManager *mManager;
};
#endif // MAINWINDOW_H
