#include "Rook.h"

Rook::Rook(const std::string color, std::string type = "Bishop") : Figure(type, color) {} // CTOR

Rook::~Rook() {} // DTOR

bool Rook::canMove(const Board& board, const Move move) const// Returns true if the Rook can move and false if it can't
{
	return true;
}
