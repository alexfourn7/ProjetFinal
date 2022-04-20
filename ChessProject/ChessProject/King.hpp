#pragma once
#include "AbsPiece.hpp"

class MoreThanTwoKingsException : public std::logic_error {
public:
	using logic_error::logic_error;
};

namespace piece {
	class King : public AbsPiece {
	public:
		King(std::string color, coord::Position pos);
		virtual ~King();

		bool validateMove(coord::Position newPos);
		static int getCounter();

	private:
		static int kingCounter_;
	};
}