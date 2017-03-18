#pragma once
#include <string>
#include <fstream>
#include <vector>
#include <SFML/Graphics.hpp>

class TileMap
{

public:
	
	TileMap(std::vector< std::vector<short> >, int, int, short);
	TileMap();
	~TileMap();
	sf::VertexArray map;
	short tileSize;

};