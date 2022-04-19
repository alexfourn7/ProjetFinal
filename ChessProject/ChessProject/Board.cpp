#include "Board.hpp" 

Board::Board() {
}

Board::~Board() {
}

std::shared_ptr<piece::AbsPiece> Board::getPiece(coord::Position piecePos) {
	return chessBoard[piecePos.x][piecePos.y].getPiece();
}

bool Board::inBoard(coord::Position pos) {
	bool isInBoard = false;
	if (0 <= pos.x <= 7 && 0 <= pos.y <= 7)
		bool isInBoard = true;
	return isInBoard;
}

coord::Position Board::kingPosition(std::string color) {
	using namespace coord;
	for (int x = 0; x <= 7; x++) {
		for (int y = 0; y <= 7; y++) {
			Position pos = { x, y };
			if (getPiece(pos) != nullptr && getPiece(pos)->getType() == "king" && getPiece(pos)->getColor() == color) {
				return pos;
			}
		}
	}
}

bool Board::isCheck(coord::Position lastPos, std::string color) {
	using namespace coord;
	bool isCheck = false;
	//Check what happen to king if you move the piece
	std::shared_ptr<piece::AbsPiece> temp = getPiece(lastPos);
	getPiece(lastPos) = nullptr;
	Position posKing = kingPosition(color);
	for (int x = 0; x <= 7; x++) {
		for (int y = 0; y <= 7; y++) {
			Position pos = { x, y };
			if (getPiece(pos) != nullptr && getPiece(pos)->getColor() != color && getPiece(pos)->validateMove(posKing) == true) {
				isCheck = true;
			}
		}
	}
	getPiece(lastPos) = temp;
	return isCheck;
}

bool Board::isCheckMate(std::string color) {
	using namespace coord;
	bool isCheckMate = false;
	Position posKing = kingPosition(color);
	//A completer
	return isCheckMate;
}

//bool Board::movePiece(Position lastPos, Position newPos) {
//	if (GetPiece(lastPos) == nullptr) {
//		return false;
//	}
//	if (inBoard(newPos) && GetPiece(lastPos)->validateMove(*this, newPos) && isCheck(lastPos, GetPiece(lastPos)->getColor())) {
//		std::shared_ptr<AbsPiece> temp = GetPiece(lastPos);
//		GetPiece(lastPos) = nullptr;
//		GetPiece(newPos) = temp;
//		return true;
//	}
//	return false;
//}