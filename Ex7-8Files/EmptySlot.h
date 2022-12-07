#pragma once
#include "Figure.h"
class EmptySlot : public Figure
{
	EmptySlot(); // CTOR
	~EmptySlot(); // DTOR
	bool canMove(const Board& board, const Move move) const; // Returns false
};

