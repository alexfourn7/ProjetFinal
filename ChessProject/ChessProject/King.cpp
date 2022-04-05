#include "King.hpp"

King::King(std::string color, Position pos) {
    setColor(color);
    setPosition(pos);
}

King::~King() {
}

bool King::validateMove(Position newPos) {
}