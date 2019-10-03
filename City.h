#pragma once
#include <iostream>
#include <memory.h>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

class City
{
public:
	City();
	void FireMissile(const sf::RenderWindow& window);
	sf::RectangleShape rect;
	std::shared_ptr<sf::VertexArray> missile;

private:
	sf::Vector2f pos = { 0, 0 };
	sf::Vector2f size = {15.0f , 15.0f};
	sf::Color col = sf::Color::Blue;
};


