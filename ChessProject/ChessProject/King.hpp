#pragma once
#include "AbsPiece.hpp"

namespace piece {
	class King : public AbsPiece {
	public:
		King(std::string color, coord::Position pos);
		virtual ~King();

		bool validateMove(coord::Position newPos);

	private:
		static int kingCounter_;
	};
}