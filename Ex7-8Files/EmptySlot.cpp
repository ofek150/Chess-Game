#include "EmptySlot.h"


EmptySlot::EmptySlot() : Figure("EmptySlot", "EmptySlot") {} // CTOR

EmptySlot::~EmptySlot() {} // DTOR

bool EmptySlot::canMove(const Board& board, const Move move) const // Returns false
{
	return false;
}
