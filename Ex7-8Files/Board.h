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
#include "Consts.h"

class Board
{
private:
	Figure* board[BOARD_SIZE][BOARD_SIZE];// represents the board
public:
	Board(std::string board); // CTOR
	~Board(); // DTOR
	Figure* getFigure(int y, int x); // Returns figure in pos [y][x]
	Figure* (&getBoard())[BOARD_SIZE][BOARD_SIZE];
	void setFigure(Figure* figure, int x, int y);
	void stringToBoard(std::string _board); // parses the strings board
};