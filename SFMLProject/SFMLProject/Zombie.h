#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <SFML\Graphics.hpp>

class Zombie {

public:

	Zombie();

	enum ZombieState { ALIVE, DEAD };

	ZombieState state;

	void setZombieState(ZombieState);

	void update();

	int counter;

	int health;

	float velocity;

	sf::Vector2f pos;

	sf::Texture zombieTexture;
	sf::Sprite  zombieSprite;

};