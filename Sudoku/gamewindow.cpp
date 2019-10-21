#include "gamewindow.h"
#include "ui_gamewindow.h"

GameWindow::GameWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GameWindow)
{
    ui->setupUi(this);
    ui->line->setStyleSheet(QString("{background-color: rgb(0,0,153);}"));
}

GameWindow::~GameWindow()
{
    delete ui;
}

