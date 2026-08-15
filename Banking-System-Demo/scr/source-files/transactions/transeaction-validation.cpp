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
		for (stClientData& tempClient : vClients)
		{
			if (tempClient.accNumber == accNumber)
			{
				if (deposit)
				{
					amount = ReadPositiveNumber("Enter deposit amount", width);
					std::cout << "\n" << std::left << std::setw(width) << "" << "Are you sure you want perfrom this transaction[Y,N]: ";
					std::cin >> answer;
					if (std::tolower(answer) == 'y')
					{
						tempClient.accBalance += amount;
					}
				}
				else
				{
					do
					{
						amount = ReadPositiveNumber("Enter withdraw amount", width);
						if (amount > tempClient.accBalance)
						{
							std::cout << std::left << std::setw(width) << "" << "Amount exceeds the balance.\n";
							std::cout << std::left << std::setw(width) << "" << "You can withdraw up tp: " << tempClient.accBalance << "\n\n";
						}
					} while (amount > tempClient.accBalance);
					std::cout << "\n" << std::left << std::setw(width) << "" << "Are you sure you want perfrom this transaction[Y,N]: ";
					std::cin >> answer;
					if (std::tolower(answer) == 'y')
					{
						tempClient.accBalance = std::abs(tempClient.accBalance * -1 + amount);
					}
				}
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << std::left << std::setw(width) << "" << "Done successfully, new balance is [" << tempClient.accBalance << "]\n";
			}
		}
		SaveDataToFile(vClients);
	}
	else
	{
		std::cout << "\n" << std::left << std::setw(width) << "" << "Client with account number [" << accNumber << "] not found.\n";
	}
	
}