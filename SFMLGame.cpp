#include "pch.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include "declaration.h"
#include "Button.h"
#include "fun.h"
#include "Background.h"
#include "Slider.h"
#include "Slider_pointer.h"
#include "TextBox.h"
#include "vector"
#include "string"




int main()
{
	sf::RenderWindow window{ {resolution_x, resolution_y, 32}, "Music Player" };
	sf::Color kolor = sf::Color::Black;
	

	std::vector<IObject*> arr;
	arr.push_back(new Button(10, 10, play_stop));
	arr.push_back(new Button(100, 100, play_stop));
	arr.push_back(new Button(100, 10, play_stop));

	arr.push_back(new Slider(200, 10, song_progress, horizontal));
	arr.push_back(new Slider(250, 300, volume, vertical));

	arr.push_back(new TextBox(100, 100, playlist));
	dynamic_cast<TextBox*>(arr.back())->load_text("abc");
	arr.push_back(new TextBox(200, 100, current));

	

	IObject* p_bck = new Background;
	//IObject* p_obj = new Button(10,10,small,play_stop);
	
	while (window.isOpen()) {



		

		window.clear(kolor);
		draw_by_array(&window, p_bck, arr);



		window.display();

	}


	/*
	while (window.isOpen()) {

		

		//eventcontrol(&window, U1, &kolor);

		window.clear(kolor);
		window.draw(Background_Sprite);
		
		draw(&window, U1);
		eventcontrol(&window, U1, &kolor);
		
		window.display();

	}*/
}
