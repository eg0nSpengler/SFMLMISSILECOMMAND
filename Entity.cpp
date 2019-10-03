#include "Entity.h"

Entity::Entity()
{

}

void Entity::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(rect, sf::RenderStates::Default);
}
