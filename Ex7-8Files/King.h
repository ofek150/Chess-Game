#pragma once
#include "Figure.h"
class King :
    public Figure
{
	King(); // CTOR
	~King(); // DTOR
	virtual bool canMove(const Board& board, const Move move) const; // Returns true if the King can move and false if it can't
};

