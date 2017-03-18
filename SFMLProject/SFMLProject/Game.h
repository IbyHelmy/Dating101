#pragma once

#include "Controller.h"
#include "Model.h"
#include "View.h"
#include "Player.h"


class Game {

public: 
	
	Game();
	~Game();

	Model* model;
	Controller* controller;
	View* view;
	Player* player;

	void loop();


};