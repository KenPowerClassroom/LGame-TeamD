#pragma once
#include"yellowCircleMovement.h"
#include"Board.h"
/// <summary>
/// moves the neutral piece
/// </summary>
class CircleInput
{
public:
	CircleMovement neutral;
	YellowCircle piece;
	void input(Cell inty[][4]);
};

