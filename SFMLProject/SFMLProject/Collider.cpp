#include <iostream>
#include "Collider.h"


Collider::Collider()
{
}

void Collider::setLevel(View::Level level)
{
	if (level == View::Tutorial) {
		rectangles = rectanglesTut;
	}
	else if (level == View::level1) {
		rectangles = rectangles1;
	}
	else if (level == View::level2) {
		rectangles = rectangles2;
	}
	else if (level == View::level3) {
		rectangles = rectangles3;
	}
}

bool Collider::isIntersecting(Player* player)
{
	for (int i = 0; i < rectangles.size(); i++) {
		if (player->playerSprite.getGlobalBounds().intersects(rectangles[i]->getGlobalBounds())) {
			return true;
		}
	}
	return false;
}

void Collider::addRectangle(float width, float height, float px, float py, View::Level level)
{
	sf::RectangleShape* rect;
	rect->setSize(sf::Vector2f(width, height));
	rect->setPosition(px, py);
	if (level == View::Tutorial) {
		rectanglesTut.push_back(rect);
	}
	else if (level == View::level1) {
		rectangles1.push_back(rect);
	}
	else if (level == View::level2) {
		rectangles2.push_back(rect);
	}
	else if (level == View::level3) {
		rectangles3.push_back(rect);
	}
}