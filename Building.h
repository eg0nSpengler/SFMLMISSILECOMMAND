#pragma once
#include <iostream>
#include <memory.h>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

class Building
{
public:
	Building();
	void FireMissile(sf::Window wind);
	sf::RectangleShape rect;
	sf::Vector2f pos = { 0, 0 };

private:
	std::shared_ptr<sf::VertexArray> missile;
	sf::Vector2f size = {15.0f , 15.0f};
	sf::Color col = sf::Color::Blue;
	bool IsFiring = false;
};


