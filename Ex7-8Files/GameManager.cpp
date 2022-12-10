#include "GameManager.h"

GameManager::GameManager(std::string startingBoard) : turn(0), gameEnded(false), board(startingBoard) {} // CTOR

GameManager::~GameManager() {} // DTOR

void GameManager::changeTurn() // Changes turn to the other player
{
	checkWin();
	if (this->gameEnded) return;
	if (this->turn == player1) this->turn = player2;
	else this->turn = player1;
}

void GameManager::updateBoard(std::string msg)
{
	
}

bool GameManager::checkWin()
{
	return false;
}

Move GameManager::parseMsg(std::string msg) // Parses the pipe's message and returns a move
{
	char str[2];
	int srcY = msg[0] - 'a' + 1;
	int srcX = msg[1] - '0';
	int destY = msg[2] - 'a' + 1;
	int destX = msg[3] - '0';
	Move move(Point(srcX, srcY), Point(destX, destY));
	std::cout << move.returnMoveStr() << std::endl;
	return move;
}

std::string GameManager::composeMsg() // composes the board string for the pip
{
	std::string msg;
	msg += this->board.boardToString();
	std::cout << "Msg: " << msg << std::endl;
	return msg;
}