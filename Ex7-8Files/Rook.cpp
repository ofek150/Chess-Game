#include "Rook.h"

Rook::Rook() : Figure("Rook") {}

Rook::~Rook(){}

bool Rook::canMove(Board& board, Move move)
{
	//doesn't cause chess, no one blocks the way,
	return true;
}
