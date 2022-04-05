#pragma once
#include "Square.hpp"

class Board {
public:
	Board();
	virtual ~Board();

	bool MovePiece(Position lastPos, Position newPos);
	std::shared_ptr<AbsPiece> GetPiece(Position piecePos);
private:
	Square chessBoard[8][8];
	bool inBoard(Position pos);
};