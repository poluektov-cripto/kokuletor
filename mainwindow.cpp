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
    connect(ui->ClearButton, &QPushButton::clicked,this,&MainWindow::def_date_clear);
    connect(ui->equalButton, &QPushButton::clicked,this,&MainWindow::equal_def);
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

void MainWindow::on_DeletepushButton_clicked()
{
    if(tempstr.size() !=0){
        tempstr.resize(tempstr.length() -1);
    }
    else if(oprs.size() !=0){
        oprs.clear();
    }
    else if ( Inputstr.size()!= 0 ){
        Inputstr.resize(Inputstr.length() -1);
    }

    if (oprs.size() !=0){
    Display = Inputstr + ' ' + oprs[0].Get_tipe() + ' ' + tempstr;
    }
    else
        Display = Inputstr + ' ' + tempstr;
    Display_out();
}

void MainWindow::date_clear(){
    tempstr.clear();
    Inputstr.clear();
    oprs.clear();
}

void MainWindow::equal_def(){
    add_to_history();
    MainFunction(true);
}

void MainWindow::def_date_clear(){
    tempstr.clear();
    Inputstr.clear();
    oprs.clear();
    Display.clear();
    Display_out();
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

void MainWindow::add_to_history(){
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

void MainWindow::MainFunction(bool ecval_flag){

    if(ecval_flag){
        Display = '=' + res;
        tempstr.clear();
        Inputstr.clear();
        oprs.clear();
    }

    if (oprs.size() > 0)
        Display = Inputstr + ' ' + oprs[0].Get_tipe() + ' ' + tempstr;
    else
        Display = tempstr;


    if(MainWindow::Possible_result()){

    res = oprs[0].function(Inputstr,tempstr);

    Display = Inputstr + ' ' + oprs[0].Get_tipe() + ' ' + tempstr + '\n' + '=' + ' ' + res;


    }



    MainWindow::Display_out();
}





void MainWindow::on_ClearallButton_clicked()
{
    ui->Historywindow->clear();
    def_date_clear();
}

