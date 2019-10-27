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
    QString s = ui->textEdit->toPlainText();
    int data = s.toInt();
    emit boxDataChanged(0,data);
}

void GameWindow::on_Box2_textChanged()
{
    QString s = ui->textEdit->toPlainText();
    int data = s.toInt();
    emit boxDataChanged(1,data);
}

void GameWindow::on_Box3_textChanged()
{
    QString s = ui->textEdit->toPlainText();
    int data = s.toInt();
    emit boxDataChanged(2,data);
}

void GameWindow::on_Box4_textChanged()
{
    QString s = ui->textEdit->toPlainText();
    int data = s.toInt();
    emit boxDataChanged(3,data);
}

void GameWindow::on_Box5_textChanged()
{
    QString s = ui->textEdit->toPlainText();
    int data = s.toInt();
    emit boxDataChanged(4,data);
}

void GameWindow::on_Box6_textChanged()
{
    QString s = ui->textEdit->toPlainText();
    int data = s.toInt();
    emit boxDataChanged(5,data);
}

void GameWindow::on_Box7_textChanged()
{
    QString s = ui->textEdit->toPlainText();
    int data = s.toInt();
    emit boxDataChanged(6,data);
}

void GameWindow::on_Box8_textChanged()
{
    QString s = ui->textEdit->toPlainText();
    int data = s.toInt();
    emit boxDataChanged(7,data);
}

void GameWindow::on_Box9_textChanged()
{
    QString s = ui->textEdit->toPlainText();
    int data = s.toInt();
    emit boxDataChanged(8,data);
}

void GameWindow::on_Box10_textChanged()
{
    QString s = ui->textEdit->toPlainText();
    int data = s.toInt();
    emit boxDataChanged(9,data);
}

void GameWindow::on_Box11_textChanged()
{
    QString s = ui->textEdit->toPlainText();
    int data = s.toInt();
    emit boxDataChanged(10,data);
}
