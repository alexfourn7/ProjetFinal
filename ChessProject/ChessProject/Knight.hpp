#pragma once
#include "AbsPiece.hpp"
#include "Board.hpp"

class Knight : public AbsPiece {
public:
	Knight(std::string color, Position pos);
	virtual ~Knight();

	bool validateMove(Position newPos);
};