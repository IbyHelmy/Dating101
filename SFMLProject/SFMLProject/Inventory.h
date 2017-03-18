#pragma once

#include <vector>
#include "Item.h"

class Inventory
{

public:
	
	Inventory();
	~Inventory();

	bool add(Item* item);

	int size;
	int gearCount;
	int maxSize;

	void update();
	void addItem(Item*);

private:
	std::vector<Item*> items;

};