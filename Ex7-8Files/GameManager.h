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
	Board board;
	bool gameEnded;
	
public:
	GameManager(std::string startingBoard); // CTOR
	~GameManager(); // DTOR
	void changeTurn(); // Changes turn to the other player
	std::string updateBoard(const std::string&);
	int checkWin(const std::string& color); // Returns INVALID_CAUSES_CHESS, VALID_MOVE_CHESS or VALID_MOVE
	bool checkCheck(const std::string& color); 	// Checks if there's check on the player with the color 'color' and return true / false
	bool checkCheckmate(const std::string& color); // Checks if there's checkmate on the player with the color 'color' and return true / false
	Move parseMsg(const std::string& board); // Parses the pipe's message and returns a move
	std::string composeMsg(int moveMsgId); // composes the board string for the pipe

};

