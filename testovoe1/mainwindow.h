#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QMainWindow>
#include <QBoxLayout>
#include <QPushButton>
#include <QFile>
#include <QDialog>
#include <dialog.h>

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    QVBoxLayout     *layout;
    Dialog          *dialog;
    QPushButton     *button;
};

#endif // MAINWINDOW_H
