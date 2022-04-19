#include "Board.hpp"
using namespace piece;

Board board;

int main() {
	//Pour faire nos tests
	coord::Position pos;
	King Emile("white", pos);
	King Fourn("black", pos);
	std::cout << Fourn.getType();


}