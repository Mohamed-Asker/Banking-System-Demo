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
	std::string accNumber = ReadAccountNumber();
	while (!FindClientByAccountNumber(vClients, accNumber))
	{
		std::cout << std::left << std::setw(width) << "" << "Client with account number [" << accNumber << "] not exist.\n";
		std::cout << std::left << std::setw(width) << "" << "please enter another account number.\n\n";
		accNumber = ReadAccountNumber();
	}
	DepositTransaction(vClients, accNumber);
}

void ShowWithdrawScreen(std::vector <stClientData>& vClients)
{
	ResetScreen();
	PrintHeaderWithdrawScreen();
	
}