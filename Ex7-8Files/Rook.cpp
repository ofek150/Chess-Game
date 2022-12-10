#include "Rook.h"

Rook::Rook(const std::string color) : Figure("Rook", color) {} // CTOR

Rook::~Rook() {} // DTOR

bool Rook::canMove(Figure* (board)[BOARD_SIZE][BOARD_SIZE], const Move& move) const // Returns true if the Rook can move and false if it can't
{
    int srcX = move.getSrc().getX(), srcY = move.getSrc().getY(), destX = move.getDest().getX(), destY = move.getDest().getY();
    if (srcX != destX && srcY != destY) return false;
    Figure* temp = NULL;

    if (srcX > destX)
    {
        int temp = destX;
        destX = srcX;
        srcX = temp;
    }
    if (srcY > destY)
    {
        int temp = destY;
        destY = srcY;
        srcY = temp;
    }
    if (srcX == destX) 
    {
        for (int i = srcY+1; i < destY; i++)
        {
            temp = board[i][srcX];
            //temp = board.getFigure(i, srcX);
            if (temp->getType() != "EmptySlot") {
                return false;
            }
        }
    }
    if (srcY == destY)
    {
        for (int i = srcX+1; i < destX; i++)
        {
            temp = board[srcY][i];
            //temp = board.getFigure(srcY, i);
            if (temp->getType() != "EmptySlot") {
                return false;
            }
        }
    }
}
