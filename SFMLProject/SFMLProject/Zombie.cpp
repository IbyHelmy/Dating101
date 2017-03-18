#include <SFML/Graphics.hpp>

#include "Zombie.h"


Zombie::Zombie() {
	
	int health = 100;

	state = ALIVE;

	pos.x = 0;
	pos.y = 0;

	counter = 5;

	velocity = 0;

}

void Zombie::update() {
	
	if (state == ALIVE) {
		if (counter >= 0 && counter < 100) {
			pos.x += 2;
			zombieSprite.setPosition(pos.x, pos.y);
			counter++;
		}
		else if (counter >= 100) {
			pos.x -= 2;
			zombieSprite.setPosition(pos.x, pos.y);
			counter++;
			if (counter == 200) {
				counter = 0;
			}
		}
	}
}