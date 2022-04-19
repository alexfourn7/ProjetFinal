#pragma once
#include "AbsPiece.hpp"
#include "Board.hpp"

namespace piece {
	class Knight : public AbsPiece {
	public:
		Knight(std::string color, coord::Position pos);
		virtual ~Knight();

		bool validateMove(coord::Position newPos);
	};
}