#include "King.hpp"
#include "Board.hpp"

int King::kingCounter_ = 0;

King::King(std::string color, Position pos) {
    setColor(color);
    setPosition(pos);
    setType("king");
    kingCounter_++;
    if (kingCounter_ > 2) {
        throw("More than two kings");
        //A retravailler
    }
}

King::~King() {
}

bool King::validateMove(Position newPos) {
    bool isMoveValid = false;

    //Move one square in any direction
    int diff_x = abs(this->getPosition().x - newPos.x);
    int diff_y = abs(this->getPosition().y - newPos.y);
    if (diff_x + diff_y == 1 || (diff_x == 1 && diff_y == 1)) {
        isMoveValid = true;
    }

    //Can't move the piece to a square that has a piece of the same color
    if (board.getPiece(newPos) != nullptr && board.getPiece(newPos)->getColor() == this->getColor()) {
        isMoveValid = false;
    }

    return isMoveValid;
}
