#pragma once
#include "AbsPiece.hpp"

class Square {
public:
	Square();
	virtual ~Square();

	void setPiece(std::shared_ptr<AbsPiece> piece);
	void clearPiece();
	std::shared_ptr<AbsPiece> getPiece();

private:
	std::shared_ptr<AbsPiece> piece_;
};