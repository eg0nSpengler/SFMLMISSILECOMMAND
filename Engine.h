#pragma once
#include <iostream>
#include <memory>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "City.h"
#include "Entity.h"
class Engine
{

public:
	Engine(int screenWidth, int screenHeight);
	~Engine();

	void Update(sf::Time deltaTime);
	void Render();
	void Run();

private:
	const int screenWidth = 0;
	const int screenHeight = 0;

private:
	sf::RenderWindow window;
	sf::Clock clock;
	sf::Time dTime;
	sf::Time dTimeSinceStart;
	std::shared_ptr<City> c1;
	std::vector<City> cities;
};

