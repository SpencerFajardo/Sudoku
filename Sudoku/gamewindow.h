#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QMainWindow>
#include "sudokumodel.h"

QT_BEGIN_NAMESPACE
namespace Ui { class GameWindow; }
QT_END_NAMESPACE

class GameWindow : public QMainWindow
{
    Q_OBJECT

public:
    GameWindow(SudokuModel *model, QWidget *parent = nullptr);
    ~GameWindow();

private:
    Ui::GameWindow *ui;
};
#endif // GAMEWINDOW_H
