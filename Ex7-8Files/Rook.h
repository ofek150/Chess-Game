#pragma once
#include "Figure.h"


class Rook : public Figure
{
public:
	Rook(const std::string color); // CTOR
	~Rook(); // DTOR
	//bool canMove(Figure** board, const Move& move) const override; // Returns true if the Rook can move and false if it can't
	bool canMove(Figure* (board)[BOARD_SIZE][BOARD_SIZE], const Move& move) const override;
};

