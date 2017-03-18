#include <iostream>
#include "Controller.h"
#include "Model.h"


Controller::Controller(Model* model, View* view)
{
	this->model = model;
	this->view  = view;

}

Controller::~Controller(){}


void Controller::inputs()
{
	sf::Event event;

	while (this->view->window.pollEvent(event))
	{

		switch (event.type)
		{

		case sf::Event::Closed:
			this->view->window.close();
			break;

		}
	}


	/*
	  _____  _           __     ________ _____       __  __  ______      ________ __  __ ______ _   _ _______ 
	 |  __ \| |        /\\ \   / /  ____|  __ \     |  \/  |/ __ \ \    / /  ____|  \/  |  ____| \ | |__   __|
	 | |__) | |       /  \\ \_/ /| |__  | |__) |    | \  / | |  | \ \  / /| |__  | \  / | |__  |  \| |  | |   
	 |  ___/| |      / /\ \\   / |  __| |  _  /     | |\/| | |  | |\ \/ / |  __| | |\/| |  __| | . ` |  | |   
	 | |    | |____ / ____ \| |  | |____| | \ \     | |  | | |__| | \  /  | |____| |  | | |____| |\  |  | |   
	 |_|    |______/_/    \_\_|  |______|_|  \_\    |_|  |_|\____/   \/   |______|_|  |_|______|_| \_|  |_|   
	 */

	/*if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
	{
		
	}*/

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		this->model->player->pos.x -= this->model->velocity;
		this->view->source.y = this->view->LEFT;
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		this->model->player->pos.x += this->model->velocity;
		this->view->source.y = this->view->RIGHT;
	}
	else {
		this->view->source.y = this->view->IDLE;
	}

	/*
	if (this->model->player->pos.y + 50 < 0) {
		this->model->player->pos.y += this->model->gravity*3;
	}
	else {
		this->model->player->pos.y = 0 - 50;
	}
	*/
}