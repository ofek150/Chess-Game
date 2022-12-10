#pragma once
#include "Figure.h"

class Queen : public Figure
{
public:
	Queen(const std::string& color); // CTOR
	~Queen(); // DTOR
	virtual bool canMove(Figure* (board)[BOARD_SIZE][BOARD_SIZE], const Move& move) const override; // Returns true if the Queen can move and false if it can't
};

