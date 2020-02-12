#pragma once
#include"yellowCircle.h"
#include"Board.h"
#include"Type.h"
#include<iostream>

class CircleMovement : public YellowCircle
{
public:
	int row = 0;
	int col = 0;
	YellowCircle neutralPiece;
	CircleMovement();
	void moveLeft(Cell t_array[][4]);
	void moveRight();
	void moveUp();
	void moveDown();
	typeState m_direction;
};

