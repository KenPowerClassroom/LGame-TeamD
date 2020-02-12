#pragma once
#include"yellowCircle.h"
#include"Board.h"
#include"Type.h"

class CircleMovement
{
public:
	int row = 0;
	int col = 0;
	YellowCircle neutralPiece;
	Cell grid[4][4];
	CircleMovement();
	void moveLeft();
	void moveRight();
	void moveUp();
	void moveDown();
	typeState m_direction;
};

