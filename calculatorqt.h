#ifndef CALCULATORQT_H
#define CALCULATORQT_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class CalculatorQt; }
QT_END_NAMESPACE

class CalculatorQt : public QMainWindow
{
    Q_OBJECT

public:
    CalculatorQt(QWidget *parent = nullptr);
    ~CalculatorQt();

private:
    Ui::CalculatorQt *ui;
};
#endif // CALCULATORQT_H
