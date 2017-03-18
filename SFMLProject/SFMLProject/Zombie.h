#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <SFML\Graphics.hpp>

class Zombie {

public:

	Zombie(float x, float y);
	~Zombie();

	enum ZombieState { ALIVE, DEAD };

	ZombieState state;

	void setZombieState(ZombieState);

	int health;

	float velocity;

	sf::Vector2f pos;

	sf::Texture zombieTexture;
	sf::Sprite  zombieSprite;

};