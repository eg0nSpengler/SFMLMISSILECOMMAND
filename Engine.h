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
	sf::RectangleShape ground;
	sf::Clock clock;
	sf::Time dTime;
	sf::Time dTimeSinceStart;
	std::vector<Entity> entities;
	City c1;
	Entity e1;
	Entity e2;



};

