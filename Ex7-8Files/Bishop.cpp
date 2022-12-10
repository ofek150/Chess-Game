#include "Bishop.h"


Bishop::Bishop(const std::string color) : Figure("Bishop", color) {} // CTOR
Bishop::~Bishop() {} // DTOR

bool Bishop::canMove(Figure* (board)[BOARD_SIZE][BOARD_SIZE], const Move& move) const // Returns true if the Bishop can move and false if it can't
{
    return true;
}
