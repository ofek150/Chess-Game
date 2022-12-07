#include "Rook.h"

Rook::Rook() : Figure("Rook") {} // CTOR

Rook::~Rook() {} // DTOR

bool Rook::canMove(Board& board, Move move) // Returns true if the rook can move and false if it can't
{
	//doesn't cause chess, no one blocks the way,
	return true;
}
