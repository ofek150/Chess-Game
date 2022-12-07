#pragma once
#include "Board.h"
#include <string>
#include "Move.h"
#include <iostream>

enum player {
	player1 = 0, player2
};
enum moveMsgID
{
	VALID_MOVE = 0,
	VALID_MOVE_CHESS,
	INVALID_SRC_EMPTY,
	INVLID_DST_TAKEN,
	INVLID_CAUSES_CHESS,
	INVLID_POINT_OUTSIDE_BOARD,
	INVLID_MOVEMENT,
	INVLID_SRC_EQU_DST,
	VALID_CHECKMATE
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
	std::string composeMsg(); // composes the board string for the pipe

};

