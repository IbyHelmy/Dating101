#pragma once
#pragma once

#include <iostream>
#include <vector>
#include "Zombie.h"
#include <SFML\Graphics.hpp>

class stdZ : public Zombie {

public:

	stdZ();
	~stdZ();

	void patrol();

	void attacking();

};