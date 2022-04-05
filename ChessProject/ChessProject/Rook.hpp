#pragma once
#include "AbsPiece.hpp"
#include "Board.hpp"

class Rook : public AbsPiece {
public:
	Rook(std::string color, Position pos);
	virtual ~Rook();

	bool validateMove(Board& board, Position newPos);
};