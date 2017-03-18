
#include "Game.h"

Game::Game()
{


	player = new Player();
	model = new Model(player);
	view = new View(model, player);
	controller = new Controller(model, view);
	model->update();
	view->render();

}

void Game::loop() 
{
	while (view->window.isOpen())
	{
		controller->inputs();
		model->update();
		view->render();
	}
}

Game::~Game() {}