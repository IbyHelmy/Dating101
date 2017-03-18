#pragma once

#include "Inventory.h"
 

class Player {

public:

	Player();
	~Player();

	enum PlayerState { DEFAULT, ARMED };

	PlayerState state;

	void setPlayerState(int state);
	bool getPlayerState();
	
	Inventory* inventory;

	int health;
	int ammo;
	
	float moveSpeed;
	float jumpForce;

	int getPlayerTile(float, float);
	
	sf::Vector2f pos;

	sf::Texture playerTexture;
	sf::Sprite  playerSprite;

	float velocity;
	Item* equipped;
	

};