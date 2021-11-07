#ifndef DIALOG4_H
#define DIALOG4_H

#include <QWidget>
#include <QMainWindow>
#include <QLabel>
#include <QCheckBox>
#include <QPushButton>
#include <QLineEdit>
#include <QSpinBox>
#include <QLineEdit>
class layouts : public QWidget
{
public:
    explicit layouts(QWidget *parent =nullptr) ;

protected:
    void createWidgets();
    void placeWidgets();
    void makeConnexions();

protected:
     QLabel* name;
     QLineEdit* Nick;
     QPushButton* search;
     QPushButton* close;
     QCheckBox* matchcase;
     QCheckBox* backword;
     QLineEdit* line;

   // QSpinBox* spin;
   // QSlider* slider;
   // QPushButton* button;
};
#endif // DIALOG4_H
