#ifndef SUDOKUMODEL_H
#define SUDOKUMODEL_H
#include <vector>
#include <stdlib.h>
#include <QMainWindow>
#include <QObject>

class SudokuModel : public QObject
{
    Q_OBJECT

private:
    int GameBoard [81];
public:
    SudokuModel();

signals:

public slots:
    void HandleUserInput(int button, int data);

};

#endif // SUDOKUMODEL_H
