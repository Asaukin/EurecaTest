#include "dialog.h"

Dialog::Dialog(QWidget *parent)
    :QWidget(parent)
{
    setWindowTitle("Диалог");
    setFixedHeight(100);
    setFixedWidth(200);
    layout = new QVBoxLayout;
    layout->setAlignment(Qt::AlignCenter);
    button = new QPushButton;
    button->setText("Кнопка 2");
    button->setMaximumSize(button->sizeHint());
    connect(button,SIGNAL(clicked(bool)),SLOT(createFile()));
    layout->addWidget(button);
    setLayout(layout);
}

Dialog::~Dialog()
{

}

void Dialog::createFile()
{
    QFile file("mir.txt");
    if(file.open(QIODevice::WriteOnly)){
        file.write("Миру мир!");
        file.flush();
        file.close();
    }
    emit signalClose();
    close();
}
