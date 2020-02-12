#include "yellowCircleMovement.h"

void CircleMovement::moveLeft()
{
	m_direction = typeState::WEST;
	if (m_direction == typeState::WEST)
	{
		col--;
		if (grid[row][col].getTypeCell() == 0)
		{
			col++;
		}
	}
	//;-; help me please
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
