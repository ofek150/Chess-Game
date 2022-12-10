#pragma once
#include "Figure.h"
class Bishop : public Figure
{
	Bishop(const std::string color, std::string type = "Bishop"); // CTOR
	~Bishop(); // DTOR
	virtual bool canMove(const Board& board, const Move move) const override; // Returns true if the Bishop can move and false if it can't
};

