#pragma once
#include "Figure.h"

class Pawn : public Figure
{
public:
	Pawn(const std::string color); // CTOR
	~Pawn(); // DTOR
	virtual bool canMove(Figure* (board)[BOARD_SIZE][BOARD_SIZE], const Move& move) const override; // Returns true if the Pawn can move and false if it can't
};

