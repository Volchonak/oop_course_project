#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_PushButtonOpenFile_clicked();

    void on_PushButtonContinueWithoutFile_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
