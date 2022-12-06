#include "Move.h"

Move::Move(Point src, Point dest) : src(src), dest(dest) {} // CTOR

Move::~Move() {} // DTOR

const Point& Move::getSrc() const // getter for src
{
    return this->src;
}

const Point& Move::getDest() const // getter for dest
{
    return this->dest;
}

const std::string Move::returnMoveStr() const
{
    std::string moveStr =  "Src(" + std::to_string(this->src.getX()) + ", " + std::to_string(this->src.getY()) + ")-->" + "Dest(" + std::to_string(this->dest.getX()) + ", " + std::to_string(this->dest.getY()) + ")";
    return moveStr;
}