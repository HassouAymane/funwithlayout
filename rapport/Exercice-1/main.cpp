#include "mainwindow.h"

#include <QApplication>
#include <dialog.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //declarer le dialogue
    Dialog *D=new Dialog;

    //l'afficher
    D->show();

    return a.exec();
}
