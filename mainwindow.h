#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setStyles();

private slots:
    void on_walletsButton_clicked();

    void on_revenuesButton_clicked();

    void on_expenditureButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
