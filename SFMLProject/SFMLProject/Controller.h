#pragma once

#include "Model.h"
#include "View.h"

class Controller
{

public:

	Model* model;
	View* view;

	Controller(Model* model, View* view);
	~Controller();

	void inputs();

};
