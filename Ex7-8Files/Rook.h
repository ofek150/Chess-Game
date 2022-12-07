#pragma once
#include "Figure.h"
class Rook :public Figure
{
public:
	Rook(const std::string color); // CTOR
	~Rook(); // DTOR
	virtual bool canMove(Board& board, Move move ) const; // Returns true if the Rook can move and false if it can't
};

