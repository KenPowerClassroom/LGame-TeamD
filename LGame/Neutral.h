#pragma once
#include "SFML/Graphics.hpp"


class Neutral
{
public:

	sf::CircleShape neutral1;
	sf::CircleShape neutral2;

	 Neutral();

	 void init();
	 void move();
	 sf::CircleShape getBody();
	 sf::CircleShape getBody2();
};

