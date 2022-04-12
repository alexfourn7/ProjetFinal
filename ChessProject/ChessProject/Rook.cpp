#include "Rook.hpp"

Rook::Rook(std::string color, Position pos) {
    setColor(color);
    setPosition(pos);
    setType("rook");
}

Rook::~Rook() {
}

bool Rook::validateMove(Position newPos) {
    bool isMoveValid = false;

    //Move one square in any direction
    int diff_x = newPos.x - this->getPosition().x;
    int diff_y = newPos.y - this->getPosition().y;
    if ((diff_x != 0 && diff_y == 0) || (diff_x == 0 && diff_y != 0)) {
        isMoveValid = true;
    }

    //Verify there is no piece in the way
    if (diff_x > 0 && isMoveValid) {
        for (int x = this->getPosition().x + 1; x < newPos.x; x++) {
            Position pos = { x, this->getPosition().y };
            if (board.getPiece(pos) != nullptr)
                return false;
        }
    }
    else if (diff_x < 0 && isMoveValid) {
        for (int x = this->getPosition().x - 1; x > newPos.x; x--) {
            Position pos = { x, this->getPosition().y };
            if (board.getPiece(pos) != nullptr)
                return false;
        }
    }
    else if (diff_y > 0 && isMoveValid) {
        for (int y = this->getPosition().y + 1; y < newPos.y; y++) {
            Position pos = { this->getPosition().x, y };
            if (board.getPiece(pos) != nullptr)
                return false;
        }
    }
    else if (diff_y < 0 && isMoveValid) {
        for (int y = this->getPosition().y - 1; y > newPos.y; y--) {
            Position pos = { this->getPosition().x, y };
            if (board.getPiece(pos) != nullptr)
                return false;
        }
    }

    //Can't move the piece to a square that has a piece of the same color
    if (board.getPiece(newPos) != nullptr && board.getPiece(newPos)->getColor() == this->getColor()) {
        isMoveValid = false;
    }

    return isMoveValid;
}
