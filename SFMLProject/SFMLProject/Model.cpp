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

}

Model::~Model(){}

void Model::update()
{
	checkCol(player, items[0]);
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

int Model::bcolT() {
	//CODE THE COLLISIONS HERE
}