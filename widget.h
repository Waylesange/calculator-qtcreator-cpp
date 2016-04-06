#ifndef WIDGET_H
#define WIDGET_H

#include <QtGui>
#include <QtWidgets>

class Widget : public QWidget
{
    Q_OBJECT
    QPushButton **numbers;
    QPushButton *plus, *minus, *mult, *div, *equal, *comma, *backspace, *ce, *c, *pm;
    QLineEdit *in;
    int value;
    char op;

public slots:
    void onPressNumber();
    void onPlus();
    void onMinus();
    void onMult();
    void onDiv();
    void onEqual();
    void onCe();
    void onBackspace();
    void onC();
    void onChangesign();
    void onComma();

public:
    //Widget();
    Widget(QWidget *parent = 0);
    ~Widget();
};

#endif // WIDGET_H
