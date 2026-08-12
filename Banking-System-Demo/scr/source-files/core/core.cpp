#include <iostream>
#include <iomanip>
#include "../../header-files/core/core.h"


void PrintHeaderMainMnue()
{
	std::cout << "\n\n";
	printf("%*s", 87, "-----------------------------------------------------\n");
	printf("%*s", 76, "* * *  MAIN MNUE SCREEN  * * * \n");
	printf("%*s", 87, "-----------------------------------------------------\n");
}

void PrintMainMnueScreen()
{
	PrintHeaderMainMnue();
	std::cout << std::left << std::setw(33) << "" << "[1] Show clients list.\n";
	std::cout << std::left << std::setw(33) << "" << "[2] Add new clietn.\n";;
	std::cout << std::left << std::setw(33) << "" << "[3] Delete client.\n";;
	std::cout << std::left << std::setw(33) << "" << "[4] Update client.\n";
	std::cout << std::left << std::setw(33) << "" << "[5] Find client.\n";;
	std::cout << std::left << std::setw(33) << "" << "[6] Exit.\n";
	printf("%*s", 87, "-----------------------------------------------------\n");
}