#pragma once
#include "Figure.h"
class Rook :public Figure
{
public:
	Rook(const std::string color, std::string type = "Rook"); // CTOR
	~Rook(); // DTOR
	virtual bool canMove(const Board& board, const Move move) const override; // Returns true if the Rook can move and false if it can't
};

