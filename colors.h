#pragma once

class Colors
{
public:

	static Colors* getInstance();
	void addColor(unsigned int favoriteColor);
	void removeColor(unsigned int favoriteColor);
	void printColors();

	Colors(const Colors&) = delete;
	Colors& operator=(const Colors&) = delete;

private:
	Colors() = default;

	static Colors* instance;
	unsigned int favoriteColors = 0;
};
