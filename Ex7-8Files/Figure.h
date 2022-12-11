#pragma once
#include <string>
#include "Point.h"
#include "Move.h"
#include "Consts.h"

class Figure
{
public:
	Figure(const std::string type, const std::string color); // CTOR
	~Figure(); // DTOR
	//virtual bool canMove(Board& board, const Move& move) const = 0;
	virtual bool canMove(Figure* (board)[BOARD_SIZE][BOARD_SIZE], const Move& move) const = 0; // Returns true or false according to if the Figure can move
	virtual std::string getType(); // Returns the type of the figure
	virtual std::string getColor(); // Returns the color of the figure
	virtual int getStepsTaken(); // Returns the amount of steps taken
	virtual void setStepsTaken(int newStepsTaken); // Sets the amount of steps taken to newStepsTaken
protected:
	const std::string type;//the type of the figure, changes only in the ctor
	const std::string color;
	int stepsTaken;//nums of steps the figure has taken
};

