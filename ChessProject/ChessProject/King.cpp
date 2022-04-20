#include "King.hpp"
#include "Board.hpp"

namespace piece {

    int King::kingCounter_ = 0;

    King::King(std::string color, coord::Position pos) {
        setColor(color);
        setPosition(pos);
        setType("king");
        if (kingCounter_ >= 2) {
            throw MoreThanTwoKingsException("There's already two kings in the game !");
        }
        kingCounter_++;
    }

    King::~King() {
        kingCounter_--;
    }

    bool King::validateMove(coord::Position newPos) {
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

    int King::getCounter() {
        return kingCounter_;
    }
}
