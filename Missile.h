#pragma once
#include <SFML/Graphics.hpp>
#include <memory.h>
class Missile
{
public:
	Missile();
	Missile(sf::Vector2f pos);
	void FireMissile(const sf::RenderWindow& window);

public:
	float velocity = 10.0f;

public:
	sf::Vector2f pos;

public:
	std::shared_ptr<sf::VertexArray> lines;

};

