#include "King.h"

King::King(const std::string color) : Figure("King", color) {} // CTOR

King::~King() {} // DTOR

bool King::canMove(Figure* (board)[BOARD_SIZE][BOARD_SIZE], const Move& move) const  // Returns true if the King can move and false if it can't
{
	int srcX = move.getSrc().getX(), srcY = move.getSrc().getY(), destX = move.getDest().getX(), destY = move.getDest().getY();
    int deltaX = std::abs(srcX - destX);
    int deltaY = std::abs(srcY - destY);
    Figure* tempFigure = nullptr;
    if (board[srcY][srcX]->getColor() == "White" && this->stepsTaken == 0)
    {
        if ((destX == 0 && destY == 0) || (destX == 7 && destY == 0))
        {
            tempFigure = board[destY][destX];
            if (tempFigure->getType() == "Rook" && tempFigure->getStepsTaken() == 0)
            {
                Move move(Point(destX, destY), Point(srcX, srcY));
                if (tempFigure->canMove(board, move))
                {
                    return true;
                }
            }
        }
    }
    else if (board[srcY][srcX]->getColor() == "Black" && this->stepsTaken == 0)
    {
        if ((destX == 0 && destY == 7) || (destX == 7 && destY == 7))
        {
            tempFigure = board[destY][destX];
            if (tempFigure->getType() == "Rook" && tempFigure->getStepsTaken() == 0)
            {
                Move move(Point(destX, destY), Point(srcX, srcY));
                if (tempFigure->canMove(board, move))
                {
                    return true;
                }
            }
        }
    }
    if (deltaX > 1 || deltaY > 1)
    {
        return false;
    }
    
    return true;
}
