#pragma once

class Colors
{
public:

	static Colors* getInstance();
	void addColor(unsigned int favoriteColor);
	void removeColor(unsigned int favoriteColor);
	void printColors();

private:
	Colors() = default;

	static Colors* instance;
	unsigned int favoriteColors = 0;
};
