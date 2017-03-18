#include <iostream>
#include <fstream>
#include <SFML/Graphics.hpp>
#include "Model.h"

Model::Model(Player* player)
{
	velocity = 4.0f;
	this->player = player;
	Item* item = new Item(300, 500);
	items.push_back(item);
	
	zombie1.pos.x = 450;
	zombie1.pos.y = 520;
	zombie1.zombieTexture.loadFromFile("Assets/zombieSmall.png");
	zombie1.zombieSprite.setTexture(zombie1.zombieTexture);
	zombie1.zombieSprite.setPosition(zombie1.pos.x, zombie1.pos.y);
}

Model::~Model(){}

void Model::update()
{
	checkCol(player, items[0]);
	zombie1.update();
}

void Model::restart(){}

void Model::checkCol(Player* player, Item* item)
{
	if (player->playerSprite.getGlobalBounds().intersects(item->itemSprite.getGlobalBounds())) {
		std::cout << "PICKEDUP!" << std::endl;
		player->inventory->addItem(item);
		item->setPU(item);
		player->setPlayerState(1);
	}
}
