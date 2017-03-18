#pragma once

#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Zombie.h"
#include "Item.h"


class Model {
	
public:

	Model(Player*);
	~Model();

	Zombie zombie1;

	void update();
	void restart();
	void checkCol(Player* player, Item* item);
	const float gravity = 2.0f;
	float velocity;
	
	std::vector<Item*> items;
	std::vector<Zombie> tutZ;

	Player* player;
};