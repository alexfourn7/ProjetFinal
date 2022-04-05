#pragma once
#include "AbsPiece.hpp"

class Square {
public:
	Square();
	virtual ~Square();

	void setPiece(AbsPiece* piece);
	void clearPiece();
	std::unique_ptr<AbsPiece> getPiece();

private:
	std::unique_ptr<AbsPiece> piece;
};