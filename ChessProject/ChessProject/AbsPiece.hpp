#pragma once
#include <memory>
#include <utility> 
#include <string>

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
	void setPosition(Position newPos);
	void setColor(std::string color);
	const Position& getPosition();

	virtual bool validateMove(Position newPos) = 0;
private:
	std::string color_;
	Position position_;
};