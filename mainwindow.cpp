#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QRegularExpression>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // конект кнопок
    connect(ui->pushButton1, &QPushButton::clicked,this,&MainWindow::add_to_str);
    connect(ui->pushButton2, &QPushButton::clicked,this,&MainWindow::add_to_str);
    connect(ui->pushButton3, &QPushButton::clicked,this,&MainWindow::add_to_str);
    connect(ui->pushButton4, &QPushButton::clicked,this,&MainWindow::add_to_str);
    connect(ui->pushButton5, &QPushButton::clicked,this,&MainWindow::add_to_str);
    connect(ui->pushButton6, &QPushButton::clicked,this,&MainWindow::add_to_str);
    connect(ui->pushButton7, &QPushButton::clicked,this,&MainWindow::add_to_str);
    connect(ui->pushButton8, &QPushButton::clicked,this,&MainWindow::add_to_str);
    connect(ui->pushButton9, &QPushButton::clicked,this,&MainWindow::add_to_str);
    connect(ui->pushButton0, &QPushButton::clicked,this,&MainWindow::add_to_str);
    connect(ui->plusButton, &QPushButton::clicked,this,&MainWindow::add_to_opr);
    connect(ui->MinusButton, &QPushButton::clicked,this,&MainWindow::add_to_opr);
    connect(ui->DivideButton, &QPushButton::clicked,this,&MainWindow::add_to_opr);
    connect(ui->MultiplyButton, &QPushButton::clicked,this,&MainWindow::add_to_opr);
    connect(ui->ClearButton, &QPushButton::clicked,this,&MainWindow::add_to_opr);
    connect(ui->equalButton, &QPushButton::clicked,this,&MainWindow::add_to_opr);
}


MainWindow::~MainWindow()
{
    delete ui;
}

// вывод

void MainWindow::Display_out(){

    ui->outputWindow->clear();

    ui->outputWindow->setText(Display);
}

// объявление функций

void MainWindow::date_clear(){
    tempstr.clear();
    Inputstr.clear();
    oprs.clear();
}

bool MainWindow::def_date_clear(QString res){

        if (oprs[0].Get_tipe() == "C"){
            date_clear();
            Display = "";
            return false;
        }

        if (oprs[0].Get_tipe() == "="){
            Display='=' + res;
            add_to_history(res);
            return false;
        }

        if (oprs[0].Get_tipe() == "CE"){
            Display="";
            date_clear();
            ui->Historywindow->clear();
            return false;
            }
    return true;
}


Since::Since(QString t){
    //count +=1;
    //id = count;
    tipe = t;
}

QString Since::Get_tipe(){
    return tipe;
}

QString Since::function(QString v1,QString v2){
    double result;

        if (tipe == "+")
            result= (v1.toDouble() + v2.toDouble());
        if (tipe == "-")
            result= (v1.toDouble() - v2.toDouble());
        if (tipe == "*")
            result= (v1.toDouble() * v2.toDouble());
        if (tipe == "/"){
        if (v2.toDouble() == 0)
                return "error v2 = 0";
            result=(v1.toDouble() / v2.toDouble());}
        return QString::number(result,'f',8);
}
bool MainWindow::Possible_result(){
    return oprs.size() !=0 and Inputstr.size() != 0 and tempstr.size() != 0;
}

// добавление в переменные

void MainWindow::add_to_history(QString res){
    QString temp;
    temp= Inputstr + ' ' + oprs[0].Get_tipe() + ' ' + tempstr + " = " + res;
    ui->Historywindow->addItem(temp);
}

void MainWindow::add_to_opr(){
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    Since x(button->text());
    oprs.push_back(x);
    Inputstr = tempstr;
    tempstr.clear();

    MainWindow::MainFunction();
}

void MainWindow::add_to_str(){

    QPushButton *button = qobject_cast<QPushButton*>(sender());

    tempstr.append(button->text());

    MainWindow::MainFunction();
}



// главная функция

void MainWindow::MainFunction(){
    QString res;

    if(MainWindow::Possible_result()){

    res = oprs[0].function(Inputstr,tempstr);
    Display = Inputstr + ' ' + oprs[0].Get_tipe() + ' ' + tempstr + '\n' + '=' + ' ' + res;
    }
        if (def_date_clear(res))
        {
            if (oprs.size() > 0)
                Display = Inputstr + ' ' + oprs[0].Get_tipe() + ' ' + tempstr;
            else
                Display = tempstr;
        }


    MainWindow::Display_out();
}

