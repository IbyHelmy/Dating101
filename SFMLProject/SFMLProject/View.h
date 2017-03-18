#pragma once
#include <fstream>

#include "Model.h"

#include <SFML/Graphics.hpp>
#include <vector>

class View {

public:
	enum Direction{IDLE, RIGHT, LEFT, JUMP};
	enum Level{Menu, Tutorial, level1, level2, level3};

	Level state;

	float animationCounter;
	int mapRows, mapCols;


	sf::Vector2i source;
	sf::Clock clock;

	Model* model;
	Player* player;
	std::vector<Zombie*> zombies;

	View(Model* model, Player* player);
	~View();

	void render();

	sf::RenderWindow window;

	sf::Sprite **mapSprites;
	sf::Texture floorTexture;

	sf::RectangleShape rect;

	sf::Texture tutTex;
	sf::Sprite tutSprite;

	sf::View camera;

	std::vector<sf::Texture> backgroundTextures;
	std::vector<sf::Sprite>  backgroundSprites;

};