#pragma once
#include "Point.h"
#include <iostream>
class Move
{
private:
	Point src;
	Point dest;
public:
	Move(Point src, Point dest); // CTOR
	~Move(); // DTOR
	const Point& getSrc() const; // getter for src
	const Point& getDest() const; // getter for dest

	std::string returnMoveStr() const; // Debug function
};

