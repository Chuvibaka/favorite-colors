#pragma once

class Colors
{
public:
	void addColor(unsigned int favoriteColor);
	void removeColor(unsigned int favoriteColor);
	void printColors();

private:
	unsigned int favoriteColors = 0;
};
