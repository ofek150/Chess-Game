#pragma once
#include "Board.h"
#include <string>
#include "Move.h"
#include "Consts.h"
#include <iostream>

class GameManager
{
private:
	int turn;
	bool gameEnded;
	Board board;
	
public:
	GameManager(std::string startingBoard); // CTOR
	~GameManager(); // DTOR
	void changeTurn(); // Changes turn to the other player
	std::string updateBoard(const std::string&);
	int checkWin(const std::string& color);
	Move parseMsg(const std::string& board); // Parses the pipe's message and returns a move
	std::string composeMsg(int moveMsgId); // composes the board string for the pipe

};

