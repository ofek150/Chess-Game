#include "Pawn.h"

Pawn::Pawn(const std::string color) : Figure("Pawn", color) {}
Pawn::~Pawn() {} // DTOR

bool Pawn::canMove(Figure* (board)[BOARD_SIZE][BOARD_SIZE], const Move& move) const // Returns true if the Pawn can move and false if it can't
{
	return true;
}
