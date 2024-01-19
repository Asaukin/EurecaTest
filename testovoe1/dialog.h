#ifndef DIALOG_H
#define DIALOG_H

#include <QWidget>
#include <QBoxLayout>
#include <QPushButton>
#include <QFile>
#include <QDebug>

class Dialog : public QWidget
{
    Q_OBJECT
public:
    Dialog(QWidget *parent = 0);
    ~Dialog();
private:
    QVBoxLayout     *layout;
    QPushButton     *button;
private slots:
    void createFile();
signals:
    void signalClose();
};

#endif // DIALOG_H
