#include "Square.hpp"

Square::Square() {
    piece_ = nullptr;
}

Square::~Square() {
}

void Square::setPiece(std::shared_ptr<piece::AbsPiece> piece) {
    piece_ = piece;
}

void Square::clearPiece() {
    piece_ = nullptr;
}

std::shared_ptr<piece::AbsPiece> Square::getPiece() {
    return piece_;
}

