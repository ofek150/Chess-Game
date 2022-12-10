#pragma once
#include "Figure.h"

class Queen : Figure
{
public:
	Queen(const std::string& color); // CTOR
	~Queen(); // DTOR
	virtual bool canMove(const Board& board, const Move move) const override; // Returns true if the Queen can move and false if it can't
};

