#ifndef DIALOG.H
#define DIALOG.H

#include <QApplication>
#include <QWidget>
#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QSpinBox>
#include<QSlider>


class Dialog : public QWidget
{
public:
    explicit Dialog(QWidget *parent =nullptr) ;

protected:
    void createWidgets();
    void placeWidgets();
    void makeConnexions();

protected:
     QLabel* name;
     QLineEdit* line;
     QPushButton* button;

    //QSpinBox* spin;
    //slider* slider;
    //QPushButton* button;
};
 #endif DIALOG.H
