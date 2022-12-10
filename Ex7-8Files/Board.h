#pragma once
#include <string>
//#include "Figure.h"
#include "Rook.h"
#include "King.h"
#include "Bishop.h"
#include "Queen.h"
#include "Pawn.h"
#include "Knight.h"
#include "EmptySlot.h"

#define BOARD_SIZE 8

class Board
{
private:
	Figure* board[BOARD_SIZE][BOARD_SIZE]; // represents the board
public:
	Board(std::string board); // CTOR
	~Board(); // DTOR
	std::string stringToBoard(std::string board); // parses the strings board
	std::string boardToString(); // composes the board string for the pipe
};

