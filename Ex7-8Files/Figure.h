#pragma once
#include <string>
#include "Point.h"

class Figure
{
public:
	Figure(const std::string type, const int x, const int y);
	~Figure();
	virtual bool canMove() = 0;
protected:
	const std::string type;//the type of the figure, changes only in the c'tor
	bool moved;//true if figure did not move, else false
	Point pos;
};

