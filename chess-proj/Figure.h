#pragma once
#include <string>

class Figure
{
public :

protected:
	const std::string type;//the type of the figure, changes only in the c'tor
	bool moved;//true if figure did not move, else false
	Point pos;
};

