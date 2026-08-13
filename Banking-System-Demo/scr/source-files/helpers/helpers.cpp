#include <iostream>
#include <iomanip>
#include <string>
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

std::string GetWordForm(const std::size_t& number)
{
	return (number <= 1) ? ") client" : ") clients";
}

void PressAnyKey(int width)
{
	std::cout << std::left << std::setw(width) << "" << "Press any key to go back to main mnue...";
	system("pause > 0");
}

std::string ReadAccountNumber()
{
	std::string accNumber;
	std::cout << std::left << std::setw(33) << "Account Number: ";
	std::getline(std::cin, accNumber);

	return accNumber;
}

double ReadPostiveNumber(const std::string& msg, const int width, const int msgWidth)
{
	double number;

	do
	{
		std::cout << std::left << std::setw(width) << "" << std::setw(msgWidth) << msg << ": ";
		while (true)
		{
			if (std::cin >> number)
				break;

			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "\n";
			std::cout << std::left << std::setw(width) << "" << "Invalid input,\n";
			std::cout << std::left << std::setw(width) << "" << msg << ": ";
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	} while (number <= 0);
	return number;
}