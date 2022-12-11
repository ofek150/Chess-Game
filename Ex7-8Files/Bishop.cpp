#include "Bishop.h"


Bishop::Bishop(const std::string color) : Figure("Bishop", color) {} // CTOR
Bishop::~Bishop() {} // DTOR

bool Bishop::canMove(Figure* (board)[BOARD_SIZE][BOARD_SIZE], const Move& move) const // Returns true if the Bishop can move and false if it can't
{
    int srcX = move.getSrc().getX(), srcY = move.getSrc().getY(), destX = move.getDest().getX(), destY = move.getDest().getY();
    int deltaX = srcX - destX;
    int deltaY = srcY - destY;
    int dirX = (deltaX > 0) ? -1 : 1;
    int dirY = (deltaY > 0) ? -1 : 1;

    if (abs(deltaX) != abs(deltaY))
    {
        return false;
    }
    int x = srcX + dirX;
    int y = srcY + dirY;
    while (x != destX && y != destY)
    {
        if (board[y][x]->getType() != "EmptySlot")
        {
            return false;
        }
        x += dirX;
        y += dirY;
    }

    return true;
}
