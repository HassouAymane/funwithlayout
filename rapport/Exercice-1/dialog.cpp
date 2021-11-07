#include "dialog.h"
#include <QHBoxLayout>
#include <QApplication>
#include <QSlider>
#include <QSpinBox>

Dialog::Dialog(QWidget *parent) : QWidget(parent)
{
    //etape 1 (creer les widgets)
    createWidgets();


    //etapee 2 (Placer les widgets)
    placeWidgets();


    //etape3 (mettre les connexions)
    makeConnexions();
}

void Dialog::createWidgets()
{
    name = new QLabel ("name");
    line = new QLineEdit;
    button = new QPushButton ("search");

    //spin = new QSpinBox;
    //slider = new QSlider;
    //button = new QPushButton ("search");

}

void Dialog::placeWidgets()
{
    auto layout = new QHBoxLayout;
    setLayout(layout);

    layout-> addWidget (name);
    layout-> addWidget (line);
    layout-> addWidget (button);

      //layout-> addWidget (spin);


}
void Dialog ::makeConnexions()
{
    connect(button,&QPushButton::clicked,qApp,&QApplication::exit);
}


