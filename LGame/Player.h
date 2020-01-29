#pragma once
#include"SFML/Graphics.hpp"

class Player
{
private:

	sf::Sprite body;
	sf::Texture m_text;
	sf::Sprite body2;
	sf::Texture m_text2;
	int m_speed;
	int x;
	int y;

public:
	Player();
	
	void move();
	void movement();
	sf::Sprite getShape();
	sf::Sprite getShape2();
	void init();
	void moveLeftOneSquare();
	void moveUpOneSquare();
	void moveDownOneSquare();
	void moveRightOneSquare();
	void rotate(sf::Event t_event);
	void rotate2(sf::Event t_event);
};

