#include "King.h"

King::King(const std::string color) : Figure("King", color) {} // CTOR

King::~King() {} // DTOR

bool King::canMove(Figure* (board)[BOARD_SIZE][BOARD_SIZE], const Move& move) const  // Returns true if the King can move and false if it can't
{
    return true;
}
