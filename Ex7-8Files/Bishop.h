#pragma once
#include "Figure.h"

class Bishop : public Figure
{
public:
	Bishop(const std::string color); // CTOR
	~Bishop(); // DTOR
	bool canMove(Figure* (board)[BOARD_SIZE][BOARD_SIZE], const Move& move) const override; // Returns true if the Bishop can move and false if it can't
};

