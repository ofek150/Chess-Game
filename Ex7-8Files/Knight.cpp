#include "Knight.h"


Knight::Knight(const std::string color) : Figure("Knight", color) {} // CTOR

Knight::~Knight() {} // DTOR

bool Knight::canMove(Figure* (board)[BOARD_SIZE][BOARD_SIZE], const Move& move) const // Returns true if the Knight can move and false if it can't
{
    int srcX = move.getSrc().getX(), srcY = move.getSrc().getY(), destX = move.getDest().getX(), destY = move.getDest().getY();
    int deltaX = std::abs(srcX - destX);
    int deltaY = std::abs(srcY - destY);
    if (deltaX + deltaY != 3 || deltaX == 0 || deltaY == 0)
    {
        return false;
    }
	return true;
}
