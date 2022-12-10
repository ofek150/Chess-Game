#include "Queen.h"

Queen::Queen(const std::string& color) : Figure("Queen", color) {} // CTOR

Queen::~Queen() {} // DTOR

bool Queen::canMove(const Board& board, const Move move) const // Returns true if the Queen can move and false if it can't
{
	return true; // use Rook and Bishop checks
}
