#include "AbsPiece.hpp"

AbsPiece::AbsPiece() {
	color_ = "none";
	type_ = "none";
}

AbsPiece::~AbsPiece() {
}

const std::string& AbsPiece::getColor() {
	return color_;
}

const std::string& AbsPiece::getType() {
	return type_;
}

void AbsPiece::setColor(std::string color) {
	color_ = color;
}

void AbsPiece::setType(std::string type) {
	type_ = type;
}

void AbsPiece::setPosition(Position newPos) {
	position_ = newPos;
}

const Position& AbsPiece::getPosition() {
	return position_;
}

