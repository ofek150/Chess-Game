#pragma once
#include "Figure.h"
class Pawn : public Figure
{
	Pawn(const std::string color); // CTOR
	~Pawn(); // DTOR
	virtual bool canMove(const Board& board, const Move move) const override; // Returns true if the Pawn can move and false if it can't
};

