#include "Bishop.h"


Bishop::Bishop(const std::string color, std::string type = "Bishop") : Figure(type, color) {} // CTOR
Bishop::~Bishop() {} // DTOR

bool Bishop::canMove(const Board& board, const Move move) const // Returns true if the Bishop can move and false if it can't
{
    return true;
}
