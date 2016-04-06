#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout *vbl = new QVBoxLayout;
    in = new QLineEdit();
    QIntValidator *iv = new QIntValidator(0,1000000,in);
    in->setValidator(iv);
    in->setAlignment(Qt::AlignRight);
    //in->setText("0");
    vbl->addWidget(in);
    plus = new QPushButton("+");
    minus = new QPushButton("-");
    mult = new QPushButton("*");
    div = new QPushButton("/");
    equal = new QPushButton("=");
    comma = new QPushButton(",");
    backspace = new QPushButton("Backspace");
    ce = new QPushButton("Ce");
    c = new QPushButton("C");
    pm = new QPushButton("Change sign");
    numbers = new QPushButton*[10];
    for(int i = 0; i < 10; ++i){
        numbers[i] = new QPushButton(QString::number(i));
    }
    QGridLayout *gl = new QGridLayout();

    gl->addWidget(numbers[7], 1, 0);
    gl->addWidget(numbers[4], 2, 0);
    gl->addWidget(numbers[1], 3, 0);
    gl->addWidget(numbers[0], 4, 0);
    gl->addWidget(numbers[8], 1, 1);
    gl->addWidget(numbers[5], 2, 1);
    gl->addWidget(numbers[2], 3, 1);
    gl->addWidget(numbers[9], 1, 2);
    gl->addWidget(numbers[6], 2, 2);
    gl->addWidget(numbers[3], 3, 2);

    gl->addWidget(plus, 4, 3);
    gl->addWidget(minus, 3, 3);
    gl->addWidget(mult, 2, 3);
    gl->addWidget(div, 1, 3);
    gl->addWidget(equal, 4, 2);
    gl->addWidget(comma, 4, 1);

    gl->addWidget(backspace, 0, 0);
    gl->addWidget(ce, 0, 1);
    gl->addWidget(c, 0, 2);
    gl->addWidget(pm, 0, 3);

    vbl->addLayout(gl);
    this->setLayout(vbl);
    for(int i = 0; i < 10; ++i){
        connect(numbers[i], SIGNAL(clicked()), this, SLOT(onPressNumber()));
    }
    connect(plus, SIGNAL(clicked()), this, SLOT(onPlus()));
    connect(minus, SIGNAL(clicked()), this, SLOT(onMinus()));
    connect(mult, SIGNAL(clicked()), this, SLOT(onMult()));
    connect(div, SIGNAL(clicked()), this, SLOT(onDiv()));
    connect(equal, SIGNAL(clicked()), this, SLOT(onEqual()));
    connect(ce, SIGNAL(clicked()), this, SLOT(onCe()));
    connect(c, SIGNAL(clicked()), this, SLOT(onC()));
    connect(backspace, SIGNAL(clicked()), this, SLOT(onBackspace()));
    connect(pm, SIGNAL(clicked()), this, SLOT(onChangesign()));
    connect(comma, SIGNAL(clicked()), this, SLOT(onComma()));

    in->setFocus();
}

Widget::~Widget()
{

}

void Widget::onPressNumber(){
    QObject *sender = this->sender();
    int i;
    for(i = 0; i < 10; ++i){
        if(sender == numbers[i]) break;
    }
    if (in->text() == "ERROR") in->setText("");
    in->setText(in->text()+QString::number(i));
    in->setFocus();
}

void Widget::onPlus(){
    op = '+';
    value = in->text().toInt();
    in->setText("");
    in->setFocus();
}

void Widget::onMinus(){
    op = '-';
    value = in->text().toInt();
    in->setText("");
    in->setFocus();
}

void Widget::onMult(){
    op = '*';
    value = in->text().toInt();
    in->setText("");
    in->setFocus();
}

void Widget::onDiv(){
    op = '/';
    value = in->text().toInt();
    in->setText("");
    in->setFocus();
}

void Widget::onEqual(){
    int res, x = in->text().toInt();
    QString s;
    switch (op){
        case '+': res = value + x; break;
        case '-': res = value - x; break;
        case '*': res = value * x; break;
        case '/':
            if(x == 0) s = "ERROR";
            else res = value / x; break;
    default: s = "ERROR"; break;
    }

    if (s.isEmpty()) s = QString::number(res);
    in->setText(s);
    in->setFocus();
    value = 0;
    op = ' ';
}

void Widget::onComma(){
    op = ',';
    value = in->text().toDouble();
    in->setFocus();
}

void Widget::onCe(){
    in->setText("");
    in->setFocus();
    op = ' ';
}

void Widget::onC(){
    in->setText("");
    in->setFocus();
    op = ' ';
}

void Widget::onChangesign(){
    //op = 'Change sign';
    //value = in->text().toInt(-in->text());
    in->setFocus();
}

void Widget::onBackspace(){
    in->setFocus();
}
