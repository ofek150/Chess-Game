#pragma once
#include "Figure.h"
class Knight : public Figure
{
public:
	Knight(const std::string color); // CTOR
	~Knight(); // DTOR
	virtual bool canMove(Figure* (board)[BOARD_SIZE][BOARD_SIZE], const Move& move) const override; // Returns true if the Knight can move and false if it can't
};

