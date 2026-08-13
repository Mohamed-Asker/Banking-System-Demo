#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include "../../header-files/core/core.h"
#include "../../header-files/helpers/helpers.h"


bool FindClientByAccountNumber(std::vector <stClientData>& vClients, const std::string& accNumber, stClientData* ptrClient = nullptr)
{
	for (const stClientData& tempClient : vClients)
	{
		if (tempClient.accNumber == accNumber)
		{
			if (ptrClient != nullptr)
			{
				*ptrClient = tempClient;
			}
			return true;
		}
	}
	return false;
}

bool isAccountNumberExists(std::vector <stClientData>& vClients, const std::string& accNumber)
{
	if (FindClientByAccountNumber(vClients, accNumber))
	{
		std::cout << "\n";
		std::cout << std::left << std::setw(33) << "" << "Client with account number [" << accNumber << "] already exists.\n";
		std::cout << std::left << std::setw(33) << "" << "Enter another account number: ";
		return true;
	}
	return false;
}

stClientData ReadNewClient(std::vector <stClientData>& vClients)
{
	stClientData client;

	std::cout << std::left << std::setw(width) << "" << std::setw(16) << "Account Number" << ": ";
	do
	{
		std::getline(std::cin, client.accNumber);
	} while (isAccountNumberExists(vClients, client.accNumber));
	std::cout << std::left << std::setw(width) << "" << std::setw(16) << "Pin Code" << ": ";
	std::getline(std::cin, client.PinCode);
	std::cout << std::left << std::setw(width) << "" << std::setw(16) << "Full Name" << ": ";
	std::getline(std::cin, client.name);
	std::cout << std::left << std::setw(width) << "" << std::setw(16) << "Phone" << ": ";
	std::getline(std::cin, client.phone);
	client.accBalance = ReadPositiveNumber("Account Number", width, 16);

	return client;
}