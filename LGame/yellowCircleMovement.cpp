#include "yellowCircleMovement.h"

CircleMovement::CircleMovement()
{
	//sf::CircleShape in;
	//neutralPiece;
}

void CircleMovement::moveLeft(Cell grid[][4])
{
	m_direction = typeState::WEST;
	if (m_direction == typeState::WEST)
	{
		col--;
		if (grid[row][col].getTypeCell() == 2)//BOUNDARY CHECK
		{
			col++;
		}
		std::cout << "MOVED LEFT";
	}
	//;-; help me please 
	//X.X I AM DEAD 
}

void CircleMovement::moveRight()
{
	//T^T
}

void CircleMovement::moveUp()
{
	//D':
}

void CircleMovement::moveDown()
{
	//D:
}
