#include "Bishop.h"


Bishop::Bishop(const std::string color) : Figure("Bishop", color) {} // CTOR
Bishop::~Bishop() {} // DTOR

bool Bishop::canMove(Figure* (board)[BOARD_SIZE][BOARD_SIZE], const Move& move) const // Returns true if the Bishop can move and false if it can't
{
    int srcX = move.getSrc().getX(), srcY = move.getSrc().getY(), destX = move.getDest().getX(), destY = move.getDest().getY();
    // Check if all the squares between the source and destination are empty
    int x = srcX;
    int y = srcY;
    int dx = (srcX < destX) ? 1 : -1;
    int dy = (srcY < destY) ? 1 : -1;
    while (x != destX || y != destY)
    {
        x += dx;
        y += dy;

        if (x < 0 || x >= BOARD_SIZE || y < 0 || y >= BOARD_SIZE)
        {
            return false;
        }

        if (board[y][x]->getType() != "EmptySlot" && x != destX && y != destY)
        {
            return false;
        }
    }

    return true;
}
