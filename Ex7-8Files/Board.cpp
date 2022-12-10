#include "Board.h"

Board::Board(std::string board) // CTOR
{
	stringToBoard(board);
}
Board::~Board() // DTOR
{
	for (int i = 0; i < BOARD_SIZE; i++)
	{
		for (int x = 0; x < BOARD_SIZE; x++)
		{
			delete this->board[i][x];
		}
	}
}

Figure* Board::getFigure(int x, int y) // Returns figure in pos [y][x]
{
	return this->board[y][x];
}

Figure* (&Board::getBoard())[BOARD_SIZE][BOARD_SIZE]
{
	return this->board;
}

void Board::setFigure(Figure* figure, int x, int y)
{
	this->board[y][x] = figure;
}

std::string Board::boardToString() // parses the strings board
{
	std::string boardStr;
	std::string tempType;
	std::string tempColor;
	
	std::string defaultBoard = "rnbkqbnrpppppppp################################PPPPPPPPRNBKQBNR1";

	for (int i = 0; i < BOARD_SIZE; i++)
	{
		for (int x = 0; x < BOARD_SIZE; x++)
		{
			tempType = this->board[i][x]->getType();
			tempColor = this->board[i][x]->getColor();
			if (tempType == "Ruke")
			{
				if (tempColor == "White") boardStr += "R";
				else boardStr += "r";
			}
			else if (tempType == "King")
			{
				if (tempColor == "White") boardStr += "K";
				else boardStr += "k";
			}
			else if (tempType == "EmptySlot") boardStr += "#";
			else if (tempType == "Queen")
			{
				if (tempColor == "White") boardStr += "Q";
				else boardStr += "q";
			}
			else if (tempType == "Pawn")
			{
				if (tempColor == "White") boardStr += "P";
				else boardStr += "p";
			}
			else if (tempType == "Bishop")
			{
				if (tempColor == "White") boardStr += "B";
				else boardStr += "b";
			}
			else if (tempType == "Knight")
			{
				if (tempColor == "White") boardStr += "N";
				else boardStr += "n";
			}
		}
	}
	return boardStr;
}

void Board::stringToBoard(std::string board) // composes the board string for the pipe
{
	for (int i = 0; i < BOARD_SIZE; i++)
	{
		for (int x = 0; x < BOARD_SIZE; x++)
		{
			switch (board.at(i*BOARD_SIZE + x))
			{
			// We intentionaly switched the colors on the creation
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
			case 'Q':
				this->board[i][x] = new Queen("Black");
				break;
			case 'q':
				this->board[i][x] = new Queen("White");
				break;
			case 'P':
				this->board[i][x] = new Pawn("Black");
				break;
			case 'p':
				this->board[i][x] = new Pawn("White");
				break;
			case 'B':
				this->board[i][x] = new Bishop("Black");
				break;
			case 'b':
				this->board[i][x] = new Bishop("White");
				break;
			case 'N':
				this->board[i][x] = new Knight("Black");
				break;
			case 'n':
				this->board[i][x] = new Knight("White");
				break;
			case '#':
				this->board[i][x] = new EmptySlot();
				break;
			}
		}
	}
}
