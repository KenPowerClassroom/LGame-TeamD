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
	body.setTexture(m_text);
	body.setPosition(300, 300);
	body.setOrigin(0, 200);

	
	m_speed = 0;
}

void Player::move()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		body.move(-3, 0);
		//tallPart.move(-3, 0);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		body.move(3, 0);
		//tallPart.move(3, 0);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		body.move(0, -3);
		//tallPart.move(0, -3);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		body.move(0, 3);
		//tallPart.move(0, 3);
	}
	

}

void Player::movement()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		body2.move(-3, 0);
		//tallPart.move(-3, 0);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		body2.move(3, 0);
		//tallPart.move(3, 0);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		body2.move(0, -3);
		//tallPart.move(0, -3);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		body2.move(0, 3);
		//tallPart.move(0, 3);
	}
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
