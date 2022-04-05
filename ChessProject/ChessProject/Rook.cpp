#include "Rook.hpp"

Rook::Rook(std::string color, Position pos) {
    setColor(color);
    setPosition(pos);
}

Rook::~Rook() {
}

bool Rook::validateMove(Board& board, Position newPos) {
    bool isMoveValid = false;

    //Move any numbers of square in one direction
    int diff_x = abs(this->getPosition().x - newPos.x);
    int diff_y = abs(this->getPosition().y - newPos.y);
    if ((diff_x == 2 && diff_y == 1) || (diff_x == 1 && diff_y == 2)) {
        isMoveValid = true;
    }

    //Can't move the piece to a square that has a piece of the same color
    if (board.GetPiece(newPos) != nullptr && board.GetPiece(newPos)->getColor() == this->getColor()) {
        isMoveValid = false;
    }

    return isMoveValid;
}