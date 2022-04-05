#include "Piece.hpp"

AbsPiece::AbsPiece() {
	color_ = "none";
}

AbsPiece::~AbsPiece() {
}

const std::string& AbsPiece::getColor() {
	return color_;
}

void AbsPiece::setColor(std::string color) {
	color_ = color;
}

void AbsPiece::setPosition(Position newPos) {
	position_ = newPos;
}

const Position& AbsPiece::getPosition() {
	return position_;
}

