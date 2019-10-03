#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
class Entity : public sf::Drawable
{
public:
	
	Entity(); // Base entity type
	sf::RectangleShape rect; // Entity rect object 
private:
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	sf::Vector2f pos = {0.0f, 0.0f}; //Entity position
	sf::Color col = sf::Color::Blue; // Entity color
	const sf::Vector2f size = { 15.0f, 15.0f }; // Entity size (const)
};

