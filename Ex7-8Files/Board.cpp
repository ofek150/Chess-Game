#include "Board.h"

Board::Board(std::string board) // CTOR
{
	stringToBoard(board);
}
Board::~Board() {}

std::string Board::boardToString()
{
	std::string boardStr;
	std::string tempType;
	std::string tempColor;
	for (int i = 0; i < BOARD_SIZE; i++)
	{
		tempType = this->board[i]->getType();
		tempColor = this->board[i]->getColor();
		if (tempType == "Ruke")
		{
			if (tempColor == "White") boardStr += "k";
			else boardStr += "r";
		}
		else if (tempType == "King")
		{
			if (tempColor == "White") boardStr += "k";
			else boardStr += "r";
		}
		else if (tempType == "EmptySlot") boardStr += "#";
	}

}

std::string Board::stringToBoard(std::string board)
{
	int boardSize = board.length();
	Figure* temp = nullptr;
	for (int i = 0; i < boardSize; i++)
	{
		switch (board[i])
		{
		case 'R':
			this->board[i] = &Rook("Black");
			break;
		case 'r':
			this->board[i] = &Rook("White");
			break;
		case 'K':
			this->board[i] = &King("Black");
			break;
		case 'k':
			this->board[i] = &King("White");
			break;
		case '#':
			this->board[i] = &EmptySlot();
			break;
		}
	}
}
