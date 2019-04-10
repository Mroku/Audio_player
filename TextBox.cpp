#include "pch.h"
#include "TextBox.h"


TextBox::TextBox(int x, int y, text_box_type t): poz_x(x), poz_y(y), type(t){

	o_type = eTextBox;

	double scale = 0.1;

	if (!font.loadFromFile("arial.ttf"))
	{
		std::cout << "Font not found" << std::endl;
	}


	switch (type)
	{
	case current:
		texture.loadFromFile("current.png");
		sprite.setScale(scale * 3, scale / 3);
		break;
	case playlist:
		texture.loadFromFile("playlist.png");
		sprite.setScale(scale * 3, scale * 3);
		break;
	default:
		break;
	}

	sprite.setTexture(texture);
	sprite.setPosition(x, y);
	


}


TextBox::~TextBox(){

}


bool TextBox::load_text(std::string s) {

	sf::Text txt;
	txt.setFont(font);

		txt.setString(s);
		txt.setCharacterSize(24);
		txt.setFillColor(sf::Color::Black);
		arr.push_back(txt);

	return true;
}

bool TextBox::load_text(std::vector<std::string> s) {

	sf::Text txt;

	for (std::vector<std::string>::size_type i = 0; i != s.size(); i++) {
		txt.setFont(font);

		txt.setString(s[i]);
		txt.setCharacterSize(24);
		txt.setFillColor(sf::Color::Black);
		arr.push_back(txt);
	}



	return true;
}

bool TextBox::print_text() {


	return false;
}