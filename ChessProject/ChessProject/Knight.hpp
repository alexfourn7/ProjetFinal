#pragma once
#include "AbsPiece.hpp"

class Knight : public AbsPiece {
public:
	Knight(std::string color, Position pos);
	virtual ~Knight();

	bool validateMove(Position newPos);
};