#pragma once


bool draw_by_array(sf::RenderWindow* p_window, IObject* p_bck, std::vector<IObject*> arr) {

	p_window->draw(p_bck->sprite);

	for (std::vector<IObject*>::size_type i = 0; i != arr.size(); i++) {
		
		switch (arr[i]->o_type)
		{
		case eButton:

			p_window->draw(arr[i]->sprite);

			break;
		case eSlider:

			p_window->draw(arr[i]->sprite);

			break;
		case eSlider_pointer:

			p_window->draw(arr[i]->sprite);

			break;
		case eTextBox:

			p_window->draw(arr[i]->sprite);
			p_window->draw(dynamic_cast<TextBox*>(arr[i])->arr[0]);
			

			break;
		default:
			break;
		}
		
		
		
		
		
		
	}
	
	return true;
}
/*

bool eventcontrol(sf::RenderWindow* p_window, Unit* p_unit, sf::Color* p_kolor ) {

	int pix = 5;

	sf::Event windowEvent;
	while (p_window->pollEvent(windowEvent)) {

		if (windowEvent.type == sf::Event::Closed || windowEvent.type == sf::Event::KeyPressed && windowEvent.key.code == sf::Keyboard::Escape) {
			p_window->close();
		}

		if (windowEvent.type == sf::Event::KeyPressed && windowEvent.key.code == sf::Keyboard::G) {
			*p_kolor = sf::Color::Green;
		}

		if (windowEvent.type == sf::Event::KeyPressed && windowEvent.key.code == sf::Keyboard::R) {
			*p_kolor = sf::Color::Red;
		}

		if (windowEvent.type == sf::Event::KeyPressed && windowEvent.key.code == sf::Keyboard::B) {
			*p_kolor = sf::Color::Blue;
		}

		if (windowEvent.type == sf::Event::KeyPressed && windowEvent.key.code == sf::Keyboard::Right) {
			p_unit->sprite.move(pix, 0);
		}

		if (windowEvent.type == sf::Event::KeyPressed && windowEvent.key.code == sf::Keyboard::Left) {
			p_unit->sprite.move(-pix, 0);
		}

		if (windowEvent.type == sf::Event::KeyPressed && windowEvent.key.code == sf::Keyboard::Up) {
			p_unit->sprite.move(0, -pix);
		}

		if (windowEvent.type == sf::Event::KeyPressed && windowEvent.key.code == sf::Keyboard::Down) {
			p_unit->sprite.move(0, pix);
		}
		


	}
	return 1;
}*/