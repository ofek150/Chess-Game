#include "Knight.h"


Knight::Knight(const std::string color) : Figure("Knight", color) {} // CTOR

Knight::~Knight() {} // DTOR

bool Knight::canMove(Figure* (board)[BOARD_SIZE][BOARD_SIZE], const Move& move) const // Returns true if the Knight can move and false if it can't
{
	return true;
}
