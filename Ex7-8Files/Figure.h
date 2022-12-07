#pragma once
#include <string>
#include "Point.h"
#include "GameManager.h"

class Figure
{
public:
	Figure(const std::string type, const std::string color);
	~Figure();
	virtual bool canMove(const Board& board, const Move move) const = 0;
	std::string getType(); // Returns the type of the figure
	std::string getColor(); // Returns the color of the figure
	int getStepsTaken(); // Returns the amount of steps taken
protected:
	const std::string type;//the type of the figure, changes only in the c'tor
	const std::string color;
	int stepsTaken;//true if figure did not move, else false
};

