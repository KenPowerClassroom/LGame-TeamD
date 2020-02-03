#include "Neutral.h"

/// <summary>
/// For the neutral player pieces
/// </summary>

Neutral::Neutral()
{
	init();
}

void Neutral::init()
{
	neutral1.setRadius(40);
	neutral1.setFillColor(sf::Color::Yellow);
	neutral1.setPosition(208, 208);
	neutral2.setRadius(40);
	neutral2.setFillColor(sf::Color::Yellow);
	neutral2.setPosition(508, 308);
}

void Neutral::move()
{
	
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		if (sf::Event::KeyReleased)//----------------------------- remove if not helping stop movement after 1 press
		{
			moveLeft1Square();

		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
			moveRight1Square();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		moveUp1Square();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		moveDown1Square();
	}



	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		moveN2Left1Square();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		moveN2Right1Square();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		moveN2Up1Square();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		moveN2Down1Square();
	}
	 
}




void Neutral::moveLeft1Square()
{
	neutral1.move(-100, 0);
}
void Neutral::moveRight1Square()
{
	neutral1.move(100, 0);
}
void Neutral::moveUp1Square()
{
	neutral1.move(0, -100);
}
void Neutral::moveDown1Square()
{
	neutral1.move(0, 100);
}


void Neutral::moveN2Left1Square()
{
	neutral2.move(-100, 0);
}
void Neutral::moveN2Right1Square()
{
	neutral2.move(100, 0);
}
void Neutral::moveN2Up1Square()
{
	neutral2.move(0, -100);
}
void Neutral::moveN2Down1Square()
{
	neutral2.move(0, 100);
}






sf::CircleShape Neutral::getBody()
{
	return neutral1;
}

sf::CircleShape Neutral::getBody2()
{
	return neutral2;
}