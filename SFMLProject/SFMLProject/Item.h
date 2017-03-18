#pragma once

#include <string>
#include "Zombie.h"


class Item {

public:
	
	Item(float x, float y);
	~Item();


	enum ItemState { FLOOR, PICKEDUP };

	ItemState state;

	std::string name;

	sf::Vector2f pos;


	sf::Texture itemTexture;
	sf::Sprite  itemSprite;

	int getState(Item*);
	void setPU(Item*);
	void setDP(Item*);


	/*
	virtual void activate(sf::Vector2f, float) = 0;
	virtual void update(sf::Time, std::vector<std::vector <short>>*, std::vector<Zombie*>*) = 0;
	virtual void draw(sf::RenderWindow*, sf::Vector2f) = 0;
	std::string getName();
	int ammo;
	*/

};