#pragma once
#include <string>


class Board
{
private:
	std::string board; // represents the board
public:
	Board(std::string board); // CTOR
	~Board(); // DTOR
	std::string boardToString();// composes the board string for the pipe
};

