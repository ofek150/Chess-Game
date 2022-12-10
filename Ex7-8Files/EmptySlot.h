#pragma once
#include "Figure.h"
class EmptySlot : public Figure
{
public:
	EmptySlot(); // CTOR
	~EmptySlot(); // DTOR
	bool canMove(const Board& board, const Move move) const override; // Returns false
};

