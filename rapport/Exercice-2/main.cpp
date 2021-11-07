#include "layouts.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    auto D= new layouts;
    D->show();
    return a.exec();
}
