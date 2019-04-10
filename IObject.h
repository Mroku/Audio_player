#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include "declaration.h"

class IObject
{



public:
	sf::Texture texture;
	sf::Sprite sprite;
	obj_type o_type;
	

	IObject();
	virtual ~IObject();

	//virtual void draw_object() = 0;
};

