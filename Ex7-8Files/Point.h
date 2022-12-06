#pragma once
#include <string>
class Point
{
public:
	Point(const int x, const int y);
	~Point();
	int getX() const;
	int getY() const;
	Point operator+(const Point& other) const;
	Point& operator+=(const Point& other);
	static std::string posToStr(Point src, Point dst );
private:
	int x;
	int y;

};

