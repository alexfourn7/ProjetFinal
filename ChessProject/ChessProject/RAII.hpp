#pragma once
#include "Board.hpp"

class Piece {
public:
	Piece(std::shared_ptr<piece::AbsPiece> p) {
		piece_ = p;
		board.getPiece(piece_->getPosition()) = piece_;
	}
	~Piece() { board.getPiece(piece_->getPosition()) = nullptr; }
	std::shared_ptr<piece::AbsPiece> get() { return piece_;  }
private:
	std::shared_ptr<piece::AbsPiece> piece_;
};