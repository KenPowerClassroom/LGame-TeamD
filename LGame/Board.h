#pragma once

#include <sstream>
#include <iostream>
#include <SFML/Graphics.hpp>

class Board
{
public:

	Board();
	~Board();

	void update(sf::RenderWindow& t_window);
	void setupBoard();
	void render(sf::RenderWindow& t_window);
	void setupFontAndText();
	void setupSprite();

	sf::View m_view;
	sf::Font m_ArialBlackfont; // font used by message
	sf::Text m_coOrdsText; // text used for message on screen
	sf::Texture m_boardTexture; // texture used for sfml logo
	float m_gridSizeF = 100.0f;
	unsigned m_gridSizeU = static_cast<unsigned>(m_gridSizeF);
	sf::RectangleShape m_shape;
	sf::RectangleShape m_tileSelector;
	const int m_mapSize = 4;

	std::vector<std::vector <sf::RectangleShape>> m_tileMap; // 2d vector, vector of vectors

	//sf::RectangleShape m_tileMap[m_mapSize][m_mapSize];
	 // large maps on the heap but not on the stack
	// static uses the stack. allocates memory statically 
	// vector, new and delete are dynamic
	// eg int map = new int [mapSize][mapSize];
	// without new it is static, uses the smaller memory
	// on the stack
	sf::Vector2i mousePosScreen;
	sf::Vector2i mousePosWindow;
	sf::Vector2f mousePosView;
	sf::Vector2u mousePosGrid;

	//	std::stringstream ss;
	
};

