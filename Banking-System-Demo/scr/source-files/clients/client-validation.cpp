#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cctype>
#include "../../header-files/clients/clients.h"
#include "../../header-files/core/core.h"
#include "../../header-files/helpers/helpers.h"
#include "../../header-files/file-handler/file-handler.h"


bool FindClientByAccountNumber(std::vector <stClientData>& vClients, const std::string& accNumber, stClientData* ptrClient)
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

bool MarkClientForDelete(std::vector <stClientData>& vClients, const std::string& accNumber)
{
	for (stClientData& tempClient : vClients)
	{
		if (tempClient.accNumber == accNumber)
		{
			tempClient.MarkForDelete = true;
			return true;
		}
	}
	return false;
}

bool DeleteClientByAccountNumber(std::vector <stClientData>& vClients, const std::string& accNumber)
{
	stClientData client;
	char answer;

	if (FindClientByAccountNumber(vClients, accNumber, &client))
	{
		ShowClientDetails(client);
		std::cout << "\n" << std::left << std::setw(width) << "" << "Are you sure do you want to delete this client[Y,N]: ";
		std::cin >> answer;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		if (std::tolower(answer) == 'y')
		{
			MarkClientForDelete(vClients, accNumber);
			SaveDataToFile(vClients);
			vClients = LoadDataFromFileToVector();
			std::cout << "\n" << std::left << std::setw(width) << "" << "Client deleted successfully.\n";
			return true;
		}
		return false;
	}
	else
	{
		std::cout << "\n" << std::left << std::setw(width) << "" << "Client with account number [" << accNumber << "] not found.\n";
		return false;
	}
}

stClientData ChangeClientRecord(const std::string& accNumber)
{
	stClientData client;

	client.accNumber = accNumber;
	std::cout << std::left << std::setw(width) << "" << std::setw(18) << "New Pin Code" << ": ";
	std::getline(std::cin, client.PinCode);
	std::cout << std::left << std::setw(width) << "" << std::setw(18) << "New Full Name" << ": ";
	std::getline(std::cin, client.name);
	std::cout << std::left << std::setw(width) << "" << std::setw(18) << "New Phone" << ": ";
	std::getline(std::cin, client.phone);
	client.accBalance = ReadPositiveNumber("New Account Number", width, 18);

	return client;
}

bool UpdateClientByAccountNumber(std::vector <stClientData>& vClients,const std::string& accNumber)
{
	stClientData client;
	char answer;
	if (FindClientByAccountNumber(vClients, accNumber, &client))
	{
		ShowClientDetails(client);
		std::cout << "\n" << std::left << std::setw(width) << "" << "Are you sure you want update this client[Y,N]: ";
		std::cin >> answer;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		if (std::tolower(answer) == 'y')
		{
			for (stClientData& tempClient : vClients)
			{
				if (tempClient.accNumber == accNumber)
				{
					tempClient = ChangeClientRecord(accNumber);
					break;
				}
			}
			SaveDataToFile(vClients);
			std::cout << "\n" << std::left << std::setw(width) << "" << "Client updated successfully.\n";
			return true;
		}
		return false;
	}
	else
	{
		std::cout << "\n" << std::left << std::setw(width) << "" << "Client with account number [" << accNumber << "] not found.\n";
		return false;
	}
}