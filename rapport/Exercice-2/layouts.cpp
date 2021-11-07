#include "layouts.h"
#include <QHBoxLayout>
#include <QApplication>
#include <QVBoxLayout>
#include <QSpinBox>
#include <QLineEdit>

layouts::layouts(QWidget *parent) : QWidget(parent)

{
    //etape 1 (creer les widgets)
        createWidgets();


        //etapee 2 (Placer les widgets)
        placeWidgets();


        //etape3 (mettre les connexions)
        makeConnexions();

}
void layouts::createWidgets()
{
    name = new QLabel ("name");
    Nick = new QLineEdit ("nick");
    search = new QPushButton ("search");
    close = new QPushButton ("close");
    matchcase = new QCheckBox ("match case");
    backword = new QCheckBox ("search backword");
    line = new QLineEdit("username...");
}

void layouts :: makeConnexions(){
    connect((close), &QPushButton :: clicked ,
            qApp ,& QApplication :: exit );
}
void layouts :: placeWidgets(){

        //main layout
    auto mainLayout = new QHBoxLayout;
    auto rightLayout = new QVBoxLayout;
    auto leftLayout = new QVBoxLayout;
    auto leftUpLayout = new QHBoxLayout;

    setLayout(mainLayout);


        //meta structure
    mainLayout-> addLayout(leftLayout);
    mainLayout->addLayout(rightLayout);
    leftLayout-> addLayout(leftUpLayout);


        //content of each layout
    leftUpLayout->addWidget(name);
    leftUpLayout->addWidget(name);
    leftUpLayout->addWidget(line);

        //terminer la partie left
    leftLayout->addWidget(matchcase);
    leftLayout->addWidget(backword);

        //terminer la partie right
    rightLayout->addWidget(search);
    rightLayout->addWidget(close);
    rightLayout->addSpacerItem(new QSpacerItem(10,10, QSizePolicy :: Expanding));
 }

