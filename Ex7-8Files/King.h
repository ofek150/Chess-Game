#pragma once
#include "Figure.h"

class King : public Figure
{
public:
	King(const std::string color); // CTOR
	~King(); // DTOR
	virtual bool canMove(Figure* (board)[BOARD_SIZE][BOARD_SIZE], const Move& move) const override; // Returns true if the King can move and false if it can't
};

