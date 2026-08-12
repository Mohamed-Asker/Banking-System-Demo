#pragma once
#include <iostream>

void PrintMainMnueScreen();

struct stClientData
{
	std::string accNumber = "";
	std::string PinCode = "";
	std::string name = "";
	std::string phone = "";
	double accBalance = 0;
	bool MarkForDelete = false;
};