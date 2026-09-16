#include <iostream>
#include "colors.h"

void Colors::addColor(unsigned int favoriteColor)
{
	unsigned int processing = 1;
	processing = processing << favoriteColor;
	favoriteColors = favoriteColors | processing;
}

void Colors::removeColor(unsigned int favoriteColor)
{
	unsigned int processing = 1;
	processing = processing << favoriteColor;
	processing = ~processing;
	favoriteColors = favoriteColors & processing;
}

void Colors::printColors()
{
	unsigned int processing = 1;
	std::cout << "Colors u choose: \n";
	processing = 1;
	processing = processing << 0;
	if ((favoriteColors & processing) > 0) std::cout << "\tred\n";
	processing = 1;
	processing = processing << 1;
	if ((favoriteColors & processing) > 0) std::cout << "\tblue\n";
	processing = 1;
	processing = processing << 2;
	if ((favoriteColors & processing) > 0) std::cout << "\tgreen\n";
	processing = 1;
	processing = processing << 3;
	if ((favoriteColors & processing) > 0) std::cout << "\tyellow\n";
	processing = 1;
	processing = processing << 4;
	if ((favoriteColors & processing) > 0) std::cout << "\tpurple\n";
	processing = 1;
	processing = processing << 5;
	if ((favoriteColors & processing) > 0) std::cout << "\taqua\n";
	processing = 1;
	processing = processing << 6;
	if ((favoriteColors & processing) > 0) std::cout << "\twhite\n";
	processing = 1;
	processing = processing << 7;
	if ((favoriteColors & processing) > 0) std::cout << "\tblack\n";
	processing = 1;
	processing = processing << 8;
	if ((favoriteColors & processing) > 0) std::cout << "\torange\n";
	processing = 1;
	processing = processing << 9;
	if ((favoriteColors & processing) > 0) std::cout << "\tbiege\n";
	processing = 1;
	processing = processing << 10;
	if ((favoriteColors & processing) > 0) std::cout << "\tpink\n";
	processing = 1;
	processing = processing << 11;
	if ((favoriteColors & processing) > 0) std::cout << "\tlime\n";
	processing = 1;
	processing = processing << 12;
	if ((favoriteColors & processing) > 0) std::cout << "\tgrey\n";
}
