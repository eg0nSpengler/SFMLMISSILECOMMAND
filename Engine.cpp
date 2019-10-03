#include "Engine.h"

Engine::Engine(int screenWidth, int screenHeight) : window(sf::VideoMode(screenWidth, screenHeight), "Missile Command")
{
	std::cout << "Engine object constructed" << std::endl;
	dTime = sf::seconds(1.0f / 60.0f);
	dTimeSinceStart = sf::Time::Zero;
	ground.setSize(sf::Vector2f(screenWidth, -50.0f));
	ground.setPosition(sf::Vector2f(0.0f, screenHeight));
	ground.setFillColor(sf::Color::Yellow);
	ground.setOutlineColor(sf::Color::Black);
	c1.rect.setPosition(screenWidth / 2, ground.getPosition().y - 30.0f);
	e1.rect.setSize(sf::Vector2f(15.0f, 15.0f));
	e1.rect.setPosition(5.0f, 5.0f);
	e1.rect.setFillColor(sf::Color::Blue);
	entities.push_back(e1);
}

Engine::~Engine()
{
	std::cout << "Engine object deleted!" << std::endl;
}

void Engine::Update(sf::Time deltaTime)
{
	sf::Event event;
	while (window.pollEvent(event))
	{
		switch (event.type)
		{
		case sf::Event::Closed:
			window.close();
			break;

		case sf::Event::MouseButtonPressed:
			if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
				c1.FireMissile(window);
		default:
			break;
		}
	}
}

void Engine::Render()
{
	window.clear(sf::Color::Black);
	/*window.draw(ground);
	window.draw(c1.rect);
	window.draw(*c1.missile); */
	for (Entity e : entities)
	{
		window.draw(e);
	}
	window.display();
}

void Engine::Run()
{

	while (window.isOpen())
	{
		while (dTimeSinceStart > dTime)
		{
			dTimeSinceStart -= dTime;
			Update(dTime);
		}
		Render();
		dTimeSinceStart += clock.restart();
	}
}
