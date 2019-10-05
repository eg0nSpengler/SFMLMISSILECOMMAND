#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
class Entity : public sf::Drawable
{
public:
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const = 0;

public:
	sf::Vector2f pos = {0.0f, 0.0f}; //Entity position
};

