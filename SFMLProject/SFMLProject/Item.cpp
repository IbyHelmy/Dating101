#include <SFML/Graphics.hpp>

#include "Item.h"


Item::Item(float x, float y) {

	name = "Pistol";

	state = FLOOR;

	this->itemTexture.loadFromFile("Assets/gun01.png");
	this->itemSprite.setTexture(this->itemTexture);
	this->itemSprite.setOrigin(0, 0);
	this->itemSprite.setPosition(x, y);


}

int Item::getState(Item* item) {
	
	if (item->state = PICKEDUP) {
		return 0;
	}
	else {
		return 1;
	}
}

void Item::setPU(Item* item)
{
	item->state = PICKEDUP;
}

void Item::setDP(Item* item)
{
	item->state = FLOOR;
}