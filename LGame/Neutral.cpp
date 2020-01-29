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
	neutral1.setRadius(35);
	neutral1.setFillColor(sf::Color::Yellow);
	neutral1.setPosition(225, 225);
	neutral2.setRadius(35);
	neutral2.setFillColor(sf::Color::Yellow);
	neutral2.setPosition(500, 500);
}

void Neutral::move()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		moveLeft1Square();
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
		neutral2.move(-3, 0);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		neutral2.move(3, 0);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		neutral2.move(0, -3);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		neutral2.move(0, 3);
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
