#pragma once
#include <string>
class Point
{
public:
	Point(const int x, const int y);
	~Point();
	int getX() const;
	int getY() const;
private:
	int x;
	int y;
};

