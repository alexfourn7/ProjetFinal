#pragma once
#include "Square.hpp"

class Board {
public:
	Board();
	virtual ~Board();

	bool MovePiece(Position lastPos, Position newPos);
private:
	Square chessBoard[8][8];
	bool inBoard(Position pos);
};