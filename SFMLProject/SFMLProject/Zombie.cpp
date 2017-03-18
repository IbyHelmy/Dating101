#include <SFML/Graphics.hpp>

#include "Zombie.h"


Zombie::Zombie(float x, float y) {
	
	int health = 100;

	state = ALIVE;

	pos.x = x;
	pos.y = y;

	velocity = 0;

	this->zombieTexture.loadFromFile("Assets/zombieSmall.png");
	this->zombieSprite.setTexture(this->zombieTexture);
	this->zombieSprite.setOrigin(0, 0);
	this->zombieSprite.setPosition(pos.x, pos.y);

}