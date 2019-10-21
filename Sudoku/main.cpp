#include "gamewindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SudokuModel m;
    GameWindow w(&m);
    w.show();
    return a.exec();
}
