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

	 void moveLeft1Square();
	 void moveRight1Square();
	 void moveUp1Square();
	 void moveDown1Square();
	 void moveN2Left1Square();
	 void moveN2Right1Square();
	 void moveN2Up1Square();
	 void moveN2Down1Square();

	 sf::CircleShape getBody();
	 sf::CircleShape getBody2();
};

