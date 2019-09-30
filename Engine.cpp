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
	b1.rect.setPosition(sf::Vector2f(106.0f, ground.getPosition().y - 50.0f));
	missile = std::make_shared<sf::VertexArray>(sf::LineStrip, 2);

}

Engine::~Engine()
{
	std::cout << "Engine object deleted!" << std::endl;
}

void Engine::FireMissile(sf::Time deltaTime)
{

	(*missile)[0].position = sf::Vector2f(b1.rect.getPosition().x, b1.rect.getPosition().y);
	(*missile)[0].color = sf::Color::Blue;
	(*missile)[1].color = sf::Color::Blue;
	//(*missile)[0].position = sf::Vector2f(0.0f, 0.0f);
	//(*missile)[1].position = sf::Vector2f(0.0f, 0.0f);
	
	for (int i = 0; i < sf::Mouse::getPosition(window).x; i++)
	{
		for (int z = 0; z < sf::Mouse::getPosition(window).y; z++)
		{
			(*missile)[1].position = sf::Vector2f(i, z);
		}
	}
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
			if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
			FireMissile(dTime);
			break;
		default:
			break;
		}
	}
}

void Engine::Render()
{
	window.clear(sf::Color::Black);
	window.draw(ground);
	window.draw(b1.rect);
	window.draw(*missile);
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
			FireMissile(dTime);
		}
		Render();
		dTimeSinceStart += clock.restart();
	}
}
