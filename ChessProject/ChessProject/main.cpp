#include "Board.hpp"
using namespace piece;

Board board;

int main() {
	//Pour faire nos tests
	coord::Position pos(0, 0);
	coord::Position pos1(1, 0);
	std::cout << board.getPiece(pos).get()->getType() << std::endl;
	std::cout << board.getPiece(pos1).get()->getType() << std::endl;
}