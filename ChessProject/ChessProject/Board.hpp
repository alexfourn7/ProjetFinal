#pragma once
#include "Square.hpp"
#include "King.hpp"
#include "Knight.hpp"
#include "Rook.hpp"

class Board {
public:
	Board();
	virtual ~Board();

	bool movePiece(Position lastPos, Position newPos);
	std::shared_ptr<AbsPiece> getPiece(Position piecePos);
private:
	Square chessBoard[8][8];
	Position kingPosition(std::string color);
	bool inBoard(Position pos);
	bool isCheck(Position lastPos, std::string color);
	bool isCheckMate(std::string color);
};