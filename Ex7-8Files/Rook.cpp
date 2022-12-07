#include "Rook.h"

Rook::Rook(const std::string color) : Figure("Rook", color) {} // CTOR

Rook::~Rook() {} // DTOR

bool Rook::canMove(const Board& board, const Move move) const// Returns true if the rook can move and false if it can't
{
	
	return true;
}
