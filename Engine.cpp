#include "Engine.h"

Engine::Engine(int screenWidth, int screenHeight) : window(sf::VideoMode(screenWidth, screenHeight), "Missile Command")
{
	std::cout << "Engine object constructed" << std::endl;
	dTime = sf::seconds(1.0f / 60.0f);
	dTimeSinceStart = sf::Time::Zero;
	c1 = std::make_shared<City>(sf::Vector2f(screenWidth / 2, screenHeight - 50.0f));
	cities.push_back(*c1);
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

				
		default:
			break;
		}
	}
}

void Engine::Render()
{
	window.clear(sf::Color::Black);
	for (const City c : cities)
	{
		window.draw(c.rect);
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
