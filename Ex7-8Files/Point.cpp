#include "Point.h"

Point::Point(const int x, const int y) : x(x), y(y){}

Point::~Point(){}

int Point::getX() const // Returns x
{
	return this->x;
}

int Point::getY() const // Returns Y
{
	return this->y;
}