#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui>
#include <QMainWindow>
#include "config.h"
#include "livingworld.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QTimer timer;
    LivingWorld world;

private slots:
    void on_pushButton_run_toggled(bool checked);
    void on_pushButton_step_clicked();
};

#endif // MAINWINDOW_H
