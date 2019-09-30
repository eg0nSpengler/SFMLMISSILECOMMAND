#pragma once
#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "Building.h"
class Engine
{

public:
	Engine(int screenWidth, int screenHeight);
	~Engine();
	inline float lerp(float x, float y, float z)
	{
		return ((1.0f - z) * x) + (z * y);
	}
	void FireMissile(sf::Time deltaTime);
	void Update(sf::Time deltaTime);
	void Render();
	void Run();

private:
	const int screenWidth = 0;
	const int screenHeight = 0;

private:
	std::shared_ptr<sf::VertexArray> missile;
	sf::RenderWindow window;
	sf::RectangleShape ground;
	sf::Clock clock;
	sf::Time dTime;
	sf::Time dTimeSinceStart;
	Building b1;


};

