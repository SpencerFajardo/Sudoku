#include "sudokumodel.h"

SudokuModel::SudokuModel()
{

}

void SudokuModel::HandleUserInput(int box, int data)
{
    GameBoard[box] = data;
}
