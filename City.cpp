#include "City.h"

City::City()
{
	rect.setSize(size);
	rect.setPosition(pos);
	rect.setFillColor(col);
	missile = std::make_shared<sf::VertexArray>(sf::LineStrip, 2);
}

void City::FireMissile(const sf::RenderWindow& window)
{
	(*missile)[0].color = sf::Color::Blue;
	(*missile)[1].color = sf::Color::Blue;
	(*missile)[0].position = sf::Vector2f(rect.getPosition().x, rect.getPosition().y);
	(*missile)[1].position = sf::Vector2f(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y);
}
