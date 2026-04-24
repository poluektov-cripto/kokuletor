#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include <QPushButton>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class Since
{
private:
    QString tipe;
    //int prior;
    //static int count = 0;
    //int id;


public:

    Since(QString t);

    QString function(QString v1,QString v2);

    QString Get_tipe();
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void date_clear();
    ~MainWindow();


private:
    Ui::MainWindow *ui;
    QString tempstr;
    QString Inputstr;
    QString Display;
    QVector <Since> oprs;
    bool def_date_clear(QString res);
    void add_to_history(QString res);
    void add_to_str();
    void add_to_opr();
    bool Possible_result();
    void Display_out();
    void MainFunction();
};
#endif // MAINWINDOW_H
