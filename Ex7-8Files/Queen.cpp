#include "Queen.h"

Queen::Queen(const std::string& color) : Bishop(color, "Queen"), Rook(color, "Queen") {} // CTOR

Queen::~Queen() {} // DTOR

bool Queen::canMove(const Board& board, const Move move) const // Returns true if the Queen can move and false if it can't
{
	return (Rook::canMove(board, move) && Bishop::canMove(board, move)); 
}
