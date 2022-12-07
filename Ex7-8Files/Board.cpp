#include "Board.h"

Board::Board(std::string board) // CTOR
{
	stringToBoard(board);
}
Board::~Board() // DTOR
{
	for (int i = 0; i < BOARD_SIZE; i++)
	{
		for (int x = 0; i < BOARD_SIZE; i++)
		{
			delete this->board[i];
		}
	}
}

std::string Board::boardToString() // parses the strings board
{
	std::string boardStr;
	std::string tempType;
	std::string tempColor;
	
	std::string defaultBoard = "rnbkqbnrpppppppp################################PPPPPPPPRNBKQBNR1";

	for (int i = 0; i < BOARD_SIZE; i++)
	{
		for (int x = 0; i < BOARD_SIZE; i++)
		{
			tempType = this->board[i][x]->getType();
			tempColor = this->board[i][x]->getColor();
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

}

std::string Board::stringToBoard(std::string board) // composes the board string for the pipe
{
	int boardSize = board.length();
	Figure* temp = nullptr;
	for (int i = 0; i < boardSize; i++)
	{
		for (int x = 0; i < BOARD_SIZE; i++)
		{
			switch (board[i])
			{
			case 'R':
				this->board[i][x] = new Rook("Black");
				break;
			case 'r':
				this->board[i][x] = new Rook("White");
				break;
			case 'K':
				this->board[i][x] = new King("Black");
				break;
			case 'k':
				this->board[i][x] = new King("White");
				break;
			case '#':
				this->board[i][x] = new EmptySlot();
				break;
			}
		}
	}
}
