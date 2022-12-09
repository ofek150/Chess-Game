#pragma once
#include "Figure.h"
class Knight : public Figure
{
	Knight(const std::string color); // CTOR
	~Knight(); // DTOR
	virtual bool canMove(const Board& board, const Move move) const override; // Returns true if the Knight can move and false if it can't
};

