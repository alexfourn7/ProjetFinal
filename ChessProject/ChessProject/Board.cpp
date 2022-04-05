#include "Board.hpp" 

Board::Board() {
}

Board::~Board() {
}

std::shared_ptr<AbsPiece> Board::GetPiece(Position piecePos) {
	return chessBoard[piecePos.x][piecePos.y].getPiece();
}

bool Board::inBoard(Position pos) {
	bool isInBoard = false;
	if (0 <= pos.x <= 7 && 0 <= pos.y <= 7)
		bool isInBoard = true;
	return isInBoard;
}