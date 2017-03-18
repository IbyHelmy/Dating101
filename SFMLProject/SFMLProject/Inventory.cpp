#include <SFML/Graphics.hpp>

#include "Inventory.h"


Inventory::Inventory() {
	
	size = 0;


}

void Inventory::addItem(Item* item)
{
	this->items.push_back(item);
	size = items.size();
}
