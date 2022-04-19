#pragma once
#include "Square.hpp"
#include "King.hpp"
#include "Knight.hpp"
#include "Rook.hpp"

class Board {
public:
	Board();
	virtual ~Board();

	bool movePiece(coord::Position lastPos, coord::Position newPos);
	std::shared_ptr<piece::AbsPiece> getPiece(coord::Position piecePos);
private:
	Square chessBoard[8][8];
	coord::Position kingPosition(std::string color);
	bool inBoard(coord::Position pos);
	bool isCheck(coord::Position lastPos, std::string color);
	bool isCheckMate(std::string color);
};