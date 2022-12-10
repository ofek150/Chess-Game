#include "Figure.h"

Figure::Figure(const std::string type, const std::string color) : type(type), stepsTaken(0), color(color) {}

Figure::~Figure() {}

std::string Figure::getType()
{
    return this->type;
}

std::string Figure::getColor()
{
    return this->color;
}

int Figure::getStepsTaken()
{
    return this->stepsTaken;
}
