#pragma once
#include <iostream>

const int width = 33;
const std::string ClientsFileName = "D:/MA-DevVault/Projects/Banking-System/Banking-System-Demo/docs/files/ClientsData.txt";
const std::string delimiter = "#//#";

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
	Transactions = 6,
	Exit = 7
};

void PrintMainMnueScreen();