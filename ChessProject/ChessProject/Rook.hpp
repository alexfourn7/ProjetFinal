#pragma once
#include "AbsPiece.hpp"
#include "Board.hpp"

namespace piece {
	class Rook : public AbsPiece {
	public:
		Rook(std::string color, coord::Position pos);
		virtual ~Rook();

		bool validateMove(coord::Position newPos);
	};
}