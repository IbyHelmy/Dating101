#pragma once

#include "Player.h"
#include <vector>
#include "Item.h"
#include "View.h"

class Collider
{

public:
	Collider();
	~Collider();

	bool isIntersecting(Player* player);
	void addRectangle(float width, float height, float px, float py, View::Level level);
	void setLevel(View::Level level)

private:
	View::Level level;
	std::vector<sf::RectangleShape*> rectanglesTut;
	std::vector<sf::RectangleShape*> rectangles1;
	std::vector<sf::RectangleShape*> rectangles2;
	std::vector<sf::RectangleShape*> rectangles3;
	std::vector<sf::RectangleShape*> rectangles;
};