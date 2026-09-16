#include <iostream>
#include "menu.h"

void printMainMenu()
{
	std::cout << "Choose 1 if you want add color \n";
	std::cout << "Choose 2 if you want remove color \n";
	std::cout << "Choose 3 if you want to show colors u choose \n";
	std::cout << "To exit pres -1 \n";
}

void printAddColorMenu()
{
	std::cout << "Choose your color: \n";
	std::cout << "\t0 - red \n" << "\t1 - blue \n" << "\t2 - green \n" << "\t3 - yellow \n" << "\t4 - purple \n";
	std::cout << "\t5 - aqua \n" << "\t6 - white \n" << "\t7 - black \n" << "\t8 - orange \n" << "\t9 - biege \n";
	std::cout << "\t10 - pink \n" << "\t11 - lime \n" << "\t12 - grey \n";
}

void printRemoveColorMenu()
{
	std::cout << "Choose your color: \n";
	std::cout << "\t0 - red \n" << "\t1 - blue \n" << "\t2 - green \n" << "\t3 - yellow \n" << "\t4 - purple \n";
	std::cout << "\t5 - aqua \n" << "\t6 - white \n" << "\t7 - black \n" << "\t8 - orange \n" << "\t9 - biege \n";
	std::cout << "\t10 - pink \n" << "\t11 - lime \n" << "\t12 - grey \n";
}
