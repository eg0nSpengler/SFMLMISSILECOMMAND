#include "Missile.h"

Missile::Missile()
{
	lines = std::make_shared<sf::VertexArray>(sf::LineStrip, 2);
}

Missile::Missile(sf::Vector2f pos) : pos(pos)
{
	lines = std::make_shared<sf::VertexArray>(sf::LineStrip, 2);
}

void Missile::FireMissile(const sf::RenderWindow& window)
{
	(*lines)[0].color = sf::Color::Blue;
	(*lines)[1].color = sf::Color::Blue;
	(*lines)[0].position = (sf::Vector2f(pos.x, pos.y));
	(*lines)[1].position = (sf::Vector2f(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y));
}
