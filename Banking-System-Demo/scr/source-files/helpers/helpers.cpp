#include <iostream>
#include <iomanip>
#include "../../header-files/helpers/helpers.h"

bool isNumberInRange(int number, int from, int to)
{
	return (number >= from && number <= to);
}

int ReadNumberInRange(const std::string& msg, int from, int to, int width)
{
	int number;
	std::cout << std::left << std::setw(width) << "" << msg << ": ";
	std::cin >> number;

	while (std::cin.fail() || !isNumberInRange(number, from, to))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::cout << std::left << std::setw(width) << "" << "Invalid Input,\n";
		std::cout << std::left << std::setw(width) << "" << "Enter number between [" << from << "] to [" << to << "]: ";
		std::cin >> number;
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	return number;
}

void ResetScreen()
{
	system("cls");
}