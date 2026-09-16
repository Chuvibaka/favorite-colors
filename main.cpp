#include <iostream>
#include "colors.h"
#include "menu.h"

int main()
{
	Colors colors;

	int colorInput = 0;
	while (colorInput != -1)
	{
		printMainMenu();
		std::cin >> colorInput;
		switch (colorInput)
		{
		case 1:
		{
			printAddColorMenu();
			unsigned int color = 0;
			std::cin >> color;
			colors.addColor(color);
			break;
		}
		case 2:
		{
			printRemoveColorMenu();
			unsigned int color = 0;
			std::cin >> color;
			colors.removeColor(color);
			break;
		}

		case 3:
		{
			colors.printColors();
			break;
		}
		default:
			if (colorInput != -1)
			{
				std::cout << "Incorrect choice, please try again: \n";
			}
			break;
		}
	}
	return 0;
}
