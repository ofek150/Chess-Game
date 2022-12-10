#pragma once
#include "Figure.h"
class EmptySlot : public Figure
{
public:
	EmptySlot(); // CTOR
	~EmptySlot(); // DTOR
	bool canMove(Figure* (board)[BOARD_SIZE][BOARD_SIZE], const Move& move) const override; // Returns false
};

