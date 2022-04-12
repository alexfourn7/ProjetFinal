#pragma once
#include <memory>
#include <utility> 
#include <string>
#include <math.h>
#include <iostream>
#include <cassert>

class Board;
extern Board board;

	struct Position
	{
		int x;
		int y;
		Position() { x = 0; y = 0; };
		Position(int x, int y) : x(x), y(y) {};
	};

class AbsPiece {
public:
	AbsPiece();
	virtual ~AbsPiece();

	const std::string& getColor();
	const std::string& getType();
	void setPosition(Position newPos);
	void setColor(std::string color);
	void setType(std::string type);
	const Position& getPosition();

	virtual bool validateMove(Position newPos) = 0;

private:
	std::string type_;
	std::string color_;
	Position position_;
};