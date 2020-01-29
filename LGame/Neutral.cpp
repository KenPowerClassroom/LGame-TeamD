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
	neutral1.setFillColor(sf::Color::Black);
	neutral1.setPosition(200, 200);
	neutral2.setRadius(35);
	neutral2.setFillColor(sf::Color::Black);
	neutral2.setPosition(500, 500);
}

void Neutral::move()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		neutral1.move(-3, 0);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		neutral1.move(3, 0);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		neutral1.move(0, -3);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		neutral1.move(0, 3);
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

sf::CircleShape Neutral::getBody()
{
	return neutral1;
}

sf::CircleShape Neutral::getBody2()
{
	return neutral2;
}
