
#include <QApplication>
#include <QWidget>
#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QSpinBox>
#include<QSlider>
#include <QTextEdit>
#include <QComboBox>
#include <QDialogButtonBox>
#include <QFormLayout>

class bugreport : public QWidget{
    Q_OBJECT
  public:
//constructor
    bugreport(QWidget *parent = nullptr);
    void createWidgets();
    void positionWidgets();

  private:
//initialization
    QLineEdit* nameEdit ;
    QLineEdit* companyEdit ;
    QLineEdit* phoneEdit ;
    QLineEdit* emailEdit ;
    QLineEdit* problemEdit ;
    QTextEdit* summaryEdit ;
    QComboBox* reproducibilityCombo;
    QDialogButtonBox* buttonBox;
};
