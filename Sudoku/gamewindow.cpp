#include "gamewindow.h"
#include "ui_gamewindow.h"

GameWindow::GameWindow(SudokuModel *model, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GameWindow)
{
    ui->setupUi(this);
    ui->line->setStyleSheet(QString("{background-color: rgb(0,0,153);}"));

    QObject::connect(this, &GameWindow::boxDataChanged, model, &SudokuModel::HandleUserInput);
}

GameWindow::~GameWindow()
{
    delete ui;
}


void GameWindow::on_Box1_textChanged()
{
    int data = ui->Box1->
    emit boxDataChanged(0);
}
