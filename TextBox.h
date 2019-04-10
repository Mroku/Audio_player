#pragma once
#include "IObject.h"
class TextBox : public IObject{
private:
	UINT poz_x;
	UINT poz_y;
	text_box_type type;
	sf::Font font;

public:
	std::vector<sf::Text> arr;

	TextBox(int x, int y, text_box_type t);
	virtual ~TextBox();

	bool load_text(std::string s);
	bool load_text(std::vector<std::string> s);
	bool print_text();

};

