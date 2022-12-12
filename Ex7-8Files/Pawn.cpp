#include "Pawn.h"

Pawn::Pawn(const std::string color) : Figure("Pawn", color) {}
Pawn::~Pawn() {} // DTOR

bool Pawn::canMove(Figure* (board)[BOARD_SIZE][BOARD_SIZE], const Move& move) const // Returns true if the Pawn can move and false if it can't
{
    int srcX = move.getSrc().getX(), srcY = move.getSrc().getY(), destX = move.getDest().getX(), destY = move.getDest().getY();
    int deltaX = destX - srcX;
    int deltaY = destY - srcY;
    if (board[srcY][srcX]->getColor() == "White")
    {
        if (deltaY == 1 && std::abs(deltaX) == 1)
        {
            Figure* destFigure = board[destY][destX];
            if (destFigure->getType() == "EmptySlot")
            {
                return false;
            }
        }
        else if (deltaY == 2)
        {
            if (deltaX != 0 || board[srcY][srcX]->getStepsTaken() != 0)
            {
                return false;
            }
        }
        else if (deltaY == 1 && board[destY][destX]->getType() == "EmptySlot")
        {
            if (deltaX != 0)
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    else
    {
        if (deltaY == -1 && std::abs(deltaX) == 1)
        {
            Figure* destFigure = board[destY][destX];
            if (destFigure->getType() == "EmptySlot")
            {
                return false;
            }
        }
        else if (deltaY == -2)
        {
            if (deltaX != 0 || board[destY][destX]->getStepsTaken() != 0)
            {
                return false;
            }
        }
        else if (deltaY == -1 && board[destY][destX]->getType() == "EmptySlot")
        {
            if (deltaX != 0)
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    return true;
}
