#include <iostream>
#include "View.h"
#include <SFML/Graphics.hpp>

View::View(Model* model, Player* player) 
{

	this->model = model;
	this->player = player;

	sf::Vector2i source(1, IDLE);

	this->window.create(sf::VideoMode(1024, 650), "Dating 101");
	this->window.setFramerateLimit(60);

	state = Tutorial;
	
	this->backgroundTextures.push_back(sf::Texture());
	this->backgroundTextures.back().loadFromFile("Assets/background0.png");
	this->backgroundTextures[0].setSmooth(true);
	this->backgroundSprites.push_back(sf::Sprite());
	this->backgroundSprites.back().setTexture(backgroundTextures[0]);
	this->backgroundSprites[0].setPosition(0, 0);
	


	if (!tutTex.loadFromFile("Assets/ground.png")) {
		while (1 > 0) {
			std::cout << "LOOOOOOOL" << std::endl;
		}
	}
	tutTex.setSmooth(true);
	tutSprite.setTexture(tutTex);
	tutSprite.setPosition(0, 0);
	//tutSprite.setScale(0, 0);

	camera.setCenter(sf::Vector2f(player->pos.x, player->pos.y - 150));
	camera.setSize(sf::Vector2f(800, 534));

}

View::~View(){}

void View::render()
{
	
	animationCounter += 600 * clock.restart().asSeconds();
	if (animationCounter >= 60) {
		animationCounter = 0;
		source.x++;

		if (source.x * 35 >= 210) {
			source.x = 0;
		}
	}

	//Player with pistol
	if (this->player->getPlayerState() == true) {
		this->player->playerTexture.loadFromFile("Assets/playerSheet02.png", sf::IntRect(source.x * 35, source.y * 50, 35, 50));
		this->player->playerSprite.setTexture(this->player->playerTexture);
		this->player->playerSprite.setPosition(player->pos.x, player->pos.y);
	}   	//Player with pistol
	else {
		this->player->playerTexture.loadFromFile("Assets/playerSheet01.png", sf::IntRect(source.x * 35, source.y * 50, 35, 50));
		this->player->playerSprite.setTexture(this->player->playerTexture);
		this->player->playerSprite.setPosition(player->pos.x, player->pos.y);
	}								
	
	camera.setCenter(sf::Vector2f(player->pos.x, player->pos.y - 150));
	window.setView(camera);
	
	//Checking game items
	for (int i = 0; i < model->items.size(); i++) {
		if (model->items[i]->getState(model->items[i]) == 0) {
			this->window.draw(this->model->items[i]->itemSprite);
		}
	}


	if (state == Tutorial) {
		
		this->window.clear();
		this->backgroundSprites[0].setPosition(sf::Vector2f(0 - (this->model->player->pos.x)*0.1, 0));
		this->window.draw(this->backgroundSprites[0]);
		this->window.draw(tutSprite);
		
		

		this->window.draw(this->player->playerSprite);

		window.draw(model->zombie1.zombieSprite);

		for (int i = 0; i < model->tutZ.size(); i++) {
			window.draw(model->tutZ[i].zombieSprite);
		}

		this->window.display();
	}
}