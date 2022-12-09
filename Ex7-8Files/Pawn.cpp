#include "Pawn.h"

Pawn::Pawn(const std::string color) : Figure("Pawn", color) {}
Pawn::~Pawn() {} // DTOR

bool Pawn::canMove(const Board& board, const Move move) const // Returns true if the Pawn can move and false if it can't
{
	return true;
}
