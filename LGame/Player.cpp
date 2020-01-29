#include "Player.h"

/// <summary>
/// For the L shaped player pieces
/// </summary>

Player::Player()
{

	if (!m_text.loadFromFile("ASSETS\\IMAGES\\player1.png"))
	{
		//error
	}
	x = 300;
	y = 300;
	body.setTexture(m_text);
	body.setPosition(x, y);
	body.setOrigin(0, 200);

	m_speed = 0;
}

void Player::move()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		moveLeftOneSquare();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		moveRightOneSquare();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		moveUpOneSquare();

	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		moveDownOneSquare();

	}
	

}

void Player::movement()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		moveLeftOneSquare();
		
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		moveRightOneSquare();
		
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		moveUpOneSquare();

	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		moveDownOneSquare();

	}
}


void Player::moveLeftOneSquare()
{
	body2.move(-100, 0);
	x = 300 - 10;
}

void Player::moveUpOneSquare()
{
	body2.setPosition(x, y);
	y = 300 - 100;
}

void Player::moveDownOneSquare()
{
	body2.setPosition(x, y);
	y = 300 + 100;
}

void Player::moveRightOneSquare()
{
	body2.setPosition(x, y);
	x = 300 + 100;
}


sf::Sprite Player::getShape()
{
	return body;
}

void Player::init()
{
	if (!m_text2.loadFromFile("ASSETS\\IMAGES\\player2.png"))
	{
		//error
	}
	body2.setTexture(m_text2);
	body2.setPosition(400, 300);
	body2.setOrigin(0, 200);

}

sf::Sprite Player::getShape2()
{
	return body2;
}




void Player::rotate(sf::Event t_event)
{
	if (t_event.KeyReleased)
	{
		if (sf::Keyboard::Enter == t_event.key.code)//;-; 
		{
			body.rotate(90);
			
		}
	}
}

void Player::rotate2(sf::Event t_event)
{

	if (t_event.KeyReleased)
	{
		if (sf::Keyboard::R == t_event.key.code)//;-; 
		{
			body2.rotate(90);

		}
	}
}
