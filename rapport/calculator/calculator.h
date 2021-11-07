#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <QPushButton>
#include <QLCDNumber>
#include <QVBoxLayout>


#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class calculator; }
QT_END_NAMESPACE

class calculator : public QWidget
{
public:
    //Constructor.
    explicit calculator(QWidget *parent = nullptr);
    //Methods
    void creatingWdgets();
    void positionWidgets();
    void makeConnections();
private:
    //Attributes initialization.
    QPushButton *buttons[10];
    QPushButton *bEnter;
    QLCDNumber *lcd;
    QVBoxLayout *mainLayout;
    QGridLayout *grid;
};
#endif // CALCULATOR_H
