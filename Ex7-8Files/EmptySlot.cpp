#include "EmptySlot.h"


EmptySlot::EmptySlot() : Figure("EmptySlot", "EmptySlot") {} // CTOR

EmptySlot::~EmptySlot() {} // DTOR

bool EmptySlot::canMove(Figure* (board)[BOARD_SIZE][BOARD_SIZE], const Move& move) const // Returns false
{
	return false;
}
