#pragma once
#include <string>
#include "Point.h"
#include "GameManager.h"

class Figure
{
public:
	Figure(const std::string type);
	~Figure();
	virtual bool canMove(Board& board, Move move) = 0;
protected:
	const std::string type;//the type of the figure, changes only in the c'tor
	bool moved;//true if figure did not move, else false
};

