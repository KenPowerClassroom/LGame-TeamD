#include "CircleInput.h"



void::CircleInput::input(Cell inty[4][4])
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		neutral.moveLeft(inty);
	}
}