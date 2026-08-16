#include <iostream>
#include <vector>
#include <iomanip>
#include "../../header-files/transactions/transeactions.h"
#include "../../header-files/core/core.h"
#include "../../header-files/helpers/helpers.h"
#include "../../header-files/clients/clients.h"

void ShowDepositScreen(std::vector <stClientData>& vClients)
{
	ResetScreen();
	PrintHeaderDepositScreen();
	stClientData client;
	std::string accNumber = ReadAccountNumber();
	while (!FindClientByAccountNumber(vClients, accNumber, &client))
	{
		std::cout << std::left << std::setw(width) << "" << "Client with account number [" << accNumber << "] not exist.\n";
		std::cout << std::left << std::setw(width) << "" << "Please enter another account number.\n\n";
		accNumber = ReadAccountNumber();
	}
	ShowClientDetails(client);
	std::cout << "\n";
	double amount = ReadPositiveNumber("Enter deposit amount",width);
	char answer;
	std::cout << std::left << std::setw(width) << "" << "Are you sure you want perform  this transaction[Y,N]: ";
	std::cin >> answer;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	if (std::tolower(answer) == 'y')
	{
		DepositTransaction(vClients, accNumber, amount);
	}
}

void ShowWithdrawScreen(std::vector <stClientData>& vClients)
{
	ResetScreen();
	PrintHeaderWithdrawScreen();
	stClientData client;
	std::string accNumber = ReadAccountNumber();
	while (!FindClientByAccountNumber(vClients, accNumber,&client))
	{
		std::cout << std::left << std::setw(width) << "" << "Client with account number [" << accNumber << "] not exist.\n";
		std::cout << std::left << std::setw(width) << "" << "Please enter another account number.\n\n";
		accNumber = ReadAccountNumber();
	}
	ShowClientDetails(client);
	std::cout << "\n";
	double amount;
	do
	{
		amount = ReadPositiveNumber("Enter withdraw amount", width);
		if (amount > client.accBalance)
		{
			std::cout << std::left << std::setw(width) << "" << "Amount exceeds the balance.\n";
			std::cout << std::left << std::setw(width) << "" << "You can withdraw up to: " << client.accBalance << "\n\n";
		}
	} while (amount > client.accBalance);
	
	char answer;
	std::cout << std::left << std::setw(width) << "" << "Are you sure you want perform this transaction[Y,N]: ";
	std::cin >> answer;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if (std::tolower(answer) == 'y')
	{
		DepositTransaction(vClients, accNumber, amount * -1);
	}
}