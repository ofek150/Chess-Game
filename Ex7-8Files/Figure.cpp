#include "Figure.h"

Figure::Figure(const std::string type, const std::string color) : type(type), stepsTaken(0), color(color) {} // DTOR

Figure::~Figure() {} // DTOR

std::string Figure::getType() // Returns the type of the figure
{
    return this->type;
}

std::string Figure::getColor() // Returns the color of the figure
{
    return this->color;
}

int Figure::getStepsTaken() // Returns the amount of steps taken
{
    return this->stepsTaken;
}

void Figure::setStepsTaken(int newStepsTaken) // Sets the amount of steps taken to newStepsTaken
{
    this->stepsTaken = newStepsTaken;
}
