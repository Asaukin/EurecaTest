#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Главное окно");
    setFixedHeight(300);
    setFixedWidth(400);
    layout = new QVBoxLayout;
    layout->setAlignment(Qt::AlignCenter);
    dialog = new Dialog;
    dialog->setWindowFlags(Qt::Dialog);
    dialog->setWindowModality(Qt::WindowModal);
    connect(dialog,SIGNAL(signalClose()),this,SLOT(close()));
    button = new QPushButton;
    button->setText("Кнопка 1");
    button->setMaximumSize(button->sizeHint());
    connect(button,SIGNAL(clicked(bool)),dialog,SLOT(show()));
    layout->addWidget(button);
    setLayout(layout);

}

MainWindow::~MainWindow()
{

}
