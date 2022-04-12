#pragma once
#include "AbsPiece.hpp"

class King : public AbsPiece {
public:
	King(std::string color, Position pos);
	virtual ~King();

	bool validateMove(Position newPos);

private:
	static int kingCounter_;
};