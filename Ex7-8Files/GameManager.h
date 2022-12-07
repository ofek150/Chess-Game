#pragma once
#include "Board.h"
#include <string>
#include "Move.h"
#include <iostream>

enum player {
	player1, player2
};


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
	void updateBoard(std::string);
	bool checkWin();
	Move parseMsg(std::string board); // Parses the pipe's message and returns a move
	std::string boardToString(); // composes the board string for the pipe

};

