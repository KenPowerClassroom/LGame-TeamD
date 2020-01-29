#include "Board.h"

/// <summary>
/// For the board being played on
/// </summary>

Board::Board()
{
	setupFontAndText(); // load font 
	setupSprite(); // load texture
	setupBoard();
	//m_view{ sf::VideoMode { 800.0f, 600.0f} },
	//m_view.setCentre(window.getSize().x / 2.0f, window.getSize().y / 2.0f);
}

Board::~Board()
{
}

void Board::update(sf::RenderWindow& t_window)
{
	mousePosScreen = sf::Mouse::getPosition();
	mousePosWindow = sf::Mouse::getPosition(t_window);

	//m_window.setView(m_view);
	mousePosView = t_window.mapPixelToCoords(mousePosWindow); // relative to view

	if (mousePosView.x >= 200.0f && mousePosView.x < 600.0f)
	{
		mousePosGrid.x = mousePosView.x / m_gridSizeU;
	}
	if (mousePosView.y >= 100.0f && mousePosView.y < 500.0f)
	{
		mousePosGrid.y = mousePosView.y / m_gridSizeU;
	}
	t_window.setView(t_window.getDefaultView());

	std::stringstream ss;
	ss << "Screen: " << mousePosScreen.x << " , " << mousePosScreen.y << "\n"
		<< "Window: " << mousePosWindow.x << " , " << mousePosWindow.y << "\n"
		<< "View: " << mousePosView.x << " , " << mousePosView.y << "\n"
		<< "Grid: row " << mousePosGrid.y << " , column " << mousePosGrid.x << "\n";

	m_coOrdsText.setString(ss.str());

	//std::cout << mousePosScreen.x + "," + mousePosScreen.y << std::endl;

	m_tileSelector.setPosition(mousePosGrid.x * m_gridSizeF, mousePosGrid.y * m_gridSizeF);

	//size_t could be used instead of int
	/*for (int x = 0; x < m_mapSize; x++)
	{
		for (int y = 0; y < m_mapSize; y++)
		{
			m_tileMap[x][y].setSize(sf::Vector2f(m_gridSizeF, m_gridSizeF));
			m_tileMap[x][y].setFillColor(sf::Color::White);
			m_tileMap[x][y].setOutlineThickness(2.0f);
			m_tileMap[x][y].setOutlineColor(sf::Color::Green);
			m_tileMap[x][y].setPosition(x * m_gridSizeF, y* m_gridSizeF);
		}
	}*/

	// resize - resizes vector using m_mapSize, reserve does not it reserves memory
	// 1st row is initialised here, they are the columns
	m_tileMap.resize(m_mapSize, std::vector<sf::RectangleShape>());

	for (int x = 0; x < m_mapSize; x++)
	{
		// puts rows
		m_tileMap[x].resize(m_mapSize, sf::RectangleShape());
		for (int y = 0; y < m_mapSize; y++)
		{
			m_tileMap[x][y].setSize(sf::Vector2f(m_gridSizeF, m_gridSizeF));
			m_tileMap[x][y].setFillColor(sf::Color::White);
			m_tileMap[x][y].setOutlineThickness(2.0f);
			m_tileMap[x][y].setOutlineColor(sf::Color::Green);
			m_tileMap[x][y].setPosition(x * m_gridSizeF + 200, y * m_gridSizeF + 100);
		}
	}

}

void Board::setupBoard()
{
}

void Board::render(sf::RenderWindow& t_window)
{
	//t_window.draw(m_shape);

	m_tileMap.resize(m_mapSize, std::vector<sf::RectangleShape>());

	for (int x = 0; x < m_mapSize; x++)
	{
		// puts rows
		m_tileMap[x].resize(m_mapSize, sf::RectangleShape());
		for (int y = 0; y < m_mapSize; y++)
		{
			t_window.draw(m_tileMap[x][y]);
		}
	}
	t_window.draw(m_coOrdsText);
	t_window.draw(m_tileSelector);
}

void Board::setupFontAndText()
{
	if (!m_ArialBlackfont.loadFromFile("ASSETS\\FONTS\\ariblk.ttf"))
	{
		std::cout << "problem loading arial black font" << std::endl;
	}
	m_coOrdsText.setFont(m_ArialBlackfont);
	m_coOrdsText.setString("SFML Game");
	//m_welcomeMessage.setStyle(sf::Text::Underlined | sf::Text::Italic | sf::Text::Bold);
	m_coOrdsText.setPosition(650.0f, 40.0f);
	m_coOrdsText.setCharacterSize(12U);
	//m_welcomeMessage.setOutlineColor(sf::Color::Red);
	m_coOrdsText.setFillColor(sf::Color::White);
	//m_welcomeMessage.setOutlineThickness(3.0f);
}

void Board::setupSprite()
{
	//if (!m_logoTexture.loadFromFile("ASSETS\\IMAGES\\SFML-LOGO.png"))
	//{
	//	// simple error message if previous call fails
	//	std::cout << "problem loading logo" << std::endl;
	//}
	

	//m_shape.setSize(sf::Vector2f(m_gridSizeF, m_gridSizeF));
	//m_tileSelector.setPosition(300, 400);
	m_tileSelector.setSize(sf::Vector2f(m_gridSizeF, m_gridSizeF));
	m_tileSelector.setFillColor(sf::Color::Black);
	m_tileSelector.setOutlineThickness(2.0f);
	m_tileSelector.setOutlineColor(sf::Color::Red);

}
