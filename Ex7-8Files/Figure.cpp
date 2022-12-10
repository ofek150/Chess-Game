#include "Figure.h"

Figure::Figure(const std::string type, const std::string ) : type(type), stepsTaken(0) {}

Figure::~Figure() {}

std::string Figure::getType()
{
    return this->type;
}

std::string Figure::getColor()
{
    this->color;
}

int Figure::getStepsTaken()
{
    this->stepsTaken;
}
