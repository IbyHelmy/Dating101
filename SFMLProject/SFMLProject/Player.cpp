#include <SFML/Graphics.hpp>

#include "Player.h"


Player::Player(){

	int health = 100;
	int ammo = 0;

	state = DEFAULT;

	pos.x = 100;
	pos.y = 523;

	moveSpeed = 4.0f;

	inventory = new Inventory();
	
	this->playerTexture.loadFromFile("Assets/playerSheet01.png");
	playerTexture.setSmooth(true);
	this->playerSprite.setTexture(this->playerTexture);
	this->playerSprite.setOrigin(0, 0);
	this->playerSprite.setPosition(pos.x, pos.y);

}

void Player::setPlayerState(int state)
{
	if (state == 0) {
		this->state = DEFAULT;
	}
	else {
		this->state = ARMED;
	}
}

bool Player::getPlayerState()
{
	if (state == DEFAULT) {
		return false;
	}
	else {
		return true;
	}
}