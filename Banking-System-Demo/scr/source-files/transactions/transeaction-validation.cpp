#include <iostream>
#include <vector>
#include <iomanip>
#include "../../header-files/core/core.h"
#include "../../header-files/helpers/helpers.h"
#include "../../header-files/clients/clients.h"
#include "../../header-files/file-handler/file-handler.h"

void DepositTransaction(std::vector <stClientData>& vClients, const std::string& accNumber, bool deposit)
{
	stClientData client;
	double amount;
	char answer;
	if (FindClientByAccountNumber(vClients, accNumber, &client))
	{
		ShowClientDetails(client);
		std::cout << "\n";
		if (deposit)
		{
			amount = ReadPositiveNumber("Enter deposit amount", width);
		}
		else
		{
			amount = ReadPositiveNumber("Enter withdraw amount", width);
		}
			
		std::cout << "\n" << std::left << std::setw(width) << "" << "Are you sure you want perfrom this transaction[Y,N]: ";
		std::cin >> answer;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		if (std::tolower(answer) == 'y')
		{
			for (stClientData& tempClient : vClients)
			{
				if (tempClient.accNumber == accNumber)
				{
					if (deposit)
					{
						tempClient.accBalance += amount;
					}
					else
					{
						tempClient.accBalance = std::abs(tempClient.accBalance * -1 + amount);
					}
					std::cout << std::left << std::setw(width) << "" << "Done successfully, new balance is [" << tempClient.accBalance << "]\n";
					break;
				}
			}
			SaveDataToFile(vClients);
		}
	}
	else
	{
		std::cout << "\n" << std::left << std::setw(width) << "" << "Client with account number [" << accNumber << "] not found.\n";
	}
	
}