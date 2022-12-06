#pragma once
#include "Figure.h"
class Rook :public Figure
{
public:
	Rook();
	~Rook();
	virtual bool canMove(Board& board, Move move);
};

