#include "Knight.hpp"

Knight::Knight(std::string color, Position pos) {
    setColor(color);
    setPosition(pos);
}

Knight::~Knight() {
}

bool Knight::validateMove(Board& board, Position newPos) {
    bool isMoveValid = false;

    //Move one square in any direction
    int diff_x = abs(this->getPosition().x - newPos.x);
    int diff_y = abs(this->getPosition().y - newPos.y);
    if ((diff_x > 0 && diff_y == 0) || (diff_x == 0 && diff_y > 0)) {
        isMoveValid = true;
    }

    //Can't move the piece to a square that has a piece of the same color
    if (diff_x > 0 && isMoveValid) {

    }
    else if (diff_y > 0 && isMoveValid) {

    }

    return isMoveValid;
}