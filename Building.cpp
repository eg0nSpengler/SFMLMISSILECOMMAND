#include "Building.h"

Building::Building()
{
	rect.setSize(size);
	rect.setPosition(pos);
	rect.setFillColor(col);
	missile = std::make_shared<sf::VertexArray>(sf::LineStrip, 2);
}

void Building::FireMissile(sf::Window wind)
{

}
