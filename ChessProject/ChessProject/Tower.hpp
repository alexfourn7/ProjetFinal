#pragma once
#include "AbsPiece.hpp"

class Tower : public AbsPiece {
public:
	Tower(std::string color, Position pos);
	virtual ~Tower();

	bool validateMove(Position newPos);
};