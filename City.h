#pragma once
#include <iostream>
#include <memory.h>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "Entity.h"

class City : Entity
{
public:
	City(sf::Vector2f pos);
	City(sf::Vector2f pos, sf::Color col);	
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
public:
	sf::RectangleShape rect;

private:
	const sf::Vector2f size = {25.0f , 25.0f};
	sf::Color col = sf::Color::Blue;
};


