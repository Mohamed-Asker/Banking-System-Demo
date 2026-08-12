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

enum enMainMnueOptions
{
	ShowClientsList = 1,
	AddNewClient = 2,
	DeleteClient = 3,
	UpdateClient = 4,
	FindClient = 5,
	Exit = 6
};