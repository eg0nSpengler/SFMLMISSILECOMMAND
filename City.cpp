#include "City.h"

City::City(sf::Vector2f pos, sf::Color col) : col(col)
{
	rect.setPosition(pos);
	rect.setSize(size);
	rect.setFillColor(col);
}

City::City(sf::Vector2f pos)
{
	rect.setPosition(pos);
	rect.setSize(size);
	rect.setFillColor(col);
}

void City::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(rect, sf::RenderStates::Default);
}
