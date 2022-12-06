#include "Point.h"

Point::Point(const int x, const int y) : x(x), y(y){}

Point::~Point(){}

int Point::getX() const
{
	return this->x;
}

int Point::getY() const
{
	return this->y;
}

Point Point::operator+(const Point& other) const
{
	Point p(this->x + other.getX(), this->y + other.getY());
	return p;
}

Point& Point::operator+=(const Point& other)
{
	this->x += other.getX();
	this->y += other.getY();
	return *this;
}

std::string Point::posToStr(Point src, Point dst)//need to complete
{
	return std::string();
}
