#include "Figure.h"

Figure::Figure(const std::string type, const int x, const int y) : type(type), moved(false), pos(x, y) {}

Figure::~Figure() {}
