#include "GameManager.h"

GameManager::GameManager(std::string startingBoard) : turn(whitePlayer), gameEnded(false), board(startingBoard) {} // CTOR

GameManager::~GameManager() {} // DTOR

void GameManager::changeTurn() // Changes turn to the other player
{
	//checkWin();
	if (this->gameEnded) return;
	if (this->turn == whitePlayer) this->turn = blackPlayer;
	else this->turn = whitePlayer;
}

std::string GameManager::updateBoard(const std::string& msg)
{
	Move move = parseMsg(msg);
	int srcX = move.getSrc().getX(), srcY = move.getSrc().getY(), destX = move.getDest().getX(), destY = move.getDest().getY();
	std::string returnMsg;
	if (srcX > MAX_X || srcY > MAX_Y || destX > MAX_X || destY > MAX_Y)
	{
		returnMsg = composeMsg(INVALID_POINT_OUTSIDE_BOARD);
		return returnMsg;
	}
	else if(srcX == destX && srcY == destY)
	{
		returnMsg = composeMsg(INVALID_SRC_EQU_DST);
		return returnMsg;
	}
	Figure* tempSrc = this->board.getFigure(srcX, srcY);
	Figure* tempDest = this->board.getFigure(destX, destY);
	if (tempSrc->getColor() != "White" && this->turn == whitePlayer || tempSrc->getColor() != "Black" && this->turn == blackPlayer)
	{
		returnMsg = composeMsg(INVALID_SRC_DOESNT_HAVE_PLAYER_FIGURE);
	}
	else if (tempSrc->getType() == "#")
	{
		returnMsg = composeMsg(INVALID_SRC_DOESNT_HAVE_PLAYER_FIGURE);
	}
	else if (tempSrc->getColor() == tempDest->getColor())
	{
		returnMsg = composeMsg(INVALID_DST_TAKEN);
	}
	else if(tempSrc->canMove(this->board.getBoard(), move))
	{
		this->board.setFigure(tempSrc, destX, destY);
		Figure* emptySlot = new EmptySlot();
		this->board.setFigure(emptySlot, srcX, srcY);
		int moveMsgId = checkWin(tempSrc->getColor());
		returnMsg = composeMsg(moveMsgId);
		switch (moveMsgId)
		{
		case VALID_MOVE:
			changeTurn();
			delete tempDest;
			break;
		case INVALID_CAUSES_CHESS:
			this->board.setFigure(tempSrc, srcX, srcY);
			this->board.setFigure(tempDest, destX, destY);
			break;
		case VALID_MOVE_CHESS:
			this->gameEnded = true;
			delete tempDest;
			break;
		}
	}
	else
	{
		returnMsg = composeMsg(INVALID_MOVEMENT);
	}

	//ADD CHECK FOR CHECKMATE
	return returnMsg;
}

int GameManager::checkWin(const std::string& color)
{
	/*
	if current player wins return VALID_MOVE_CHESS 
	if the other player wins return INVALID_CAUSES_CHESS
	if no ones wins return VALID MOVE
	*/
	return VALID_MOVE;
}

Move GameManager::parseMsg(const std::string& msg) // Parses the pipe's message and returns a move
{
	char str[2];
	int srcX = msg[0] - 'a' + 1;
	int srcY = msg[1] - '0';
	int destX = msg[2] - 'a' + 1;
	int destY = msg[3] - '0';
	Move move(Point(srcX - 1, srcY - 1), Point(destX - 1, destY - 1));
	std::cout << move.returnMoveStr() << std::endl;
	return move;
}

std::string GameManager::composeMsg(int moveMsgId) // composes the board string for the pip
{
	//std::string msg = this->board.boardToString() + std::to_string(moveMsgId);
	std::string msg = std::to_string(moveMsgId);
	std::cout << "Msg: " << msg << std::endl;
	return msg;
}