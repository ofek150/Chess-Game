#include "Queen.h"

Queen::Queen(const std::string& color) : Figure("Queen", color) {} // CTOR

Queen::~Queen() {} // DTOR

bool Queen::canMove(Figure* (board)[BOARD_SIZE][BOARD_SIZE], const Move& move) const // Returns true if the Queen can move and false if it can't
{
    int srcX = move.getSrc().getX(), srcY = move.getSrc().getY(), destX = move.getDest().getX(), destY = move.getDest().getY();
    int deltaX = srcX - destX;
    int deltaY = srcY - destY;
    int dirX = (deltaX > 0) ? -1 : 1;
    int dirY = (deltaY > 0) ? -1 : 1;
    bool canMove = true;

    if (!(srcX != destX && srcY != destY))
    {
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
            for (int i = srcY + 1; i < destY; i++)
            {
                temp = board[i][srcX];
                if (temp->getType() != "EmptySlot") {
                    return false;
                }
            }
        }
        if (srcY == destY)
        {
            for (int i = srcX + 1; i < destX; i++)
            {
                temp = board[srcY][i];
                if (temp->getType() != "EmptySlot") {
                    return false;
                }
            }
        }
        return true;
    }
    else if (abs(deltaX) == abs(deltaY))
    {
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
    return false;
}
