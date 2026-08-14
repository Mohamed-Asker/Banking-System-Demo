#include <iostream>
#include <vector>
#include <iomanip>
#include "../../header-files/core/core.h"
#include "../../header-files/helpers/helpers.h"
#include "../../header-files/clients/clients.h"

void Deposit(std::vector <stClientData>& vClients)
{
	std::string accNumber;
	while (true)
	{
		accNumber = ReadAccountNumber();
		if (FindClientByAccountNumber(vClients, accNumber))
		{

		}
		else
		{
			std::cout << std::left << std::setw(width) << "" << "Client with account number [" << accNumber << "] not found.\n";
		}
	}
}