#pragma once
#include "Figure.h"
class Rook :public Figure
{
public:
	Rook(); // CTOR
	~Rook(); // DTOR
	virtual bool canMove(Board& board, Move move); // Returns true if the Rook can move and false if it can't
};

