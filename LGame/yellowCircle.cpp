#include "yellowCircle.h"

/// <summary>
/// For the neutral player pieces
/// </summary>

YellowCircle::YellowCircle()
{
	neutral1.setRadius(35);
	neutral1.setFillColor(sf::Color::Yellow);
	neutral1.setPosition(15, 10);
	neutral2.setRadius(35);
	neutral2.setFillColor(sf::Color::Yellow);
	neutral2.setPosition(315, 310);
}


sf::CircleShape YellowCircle::getBody()
{
	return neutral1;
}

sf::CircleShape YellowCircle::getBody2()
{
	return neutral2;
}

