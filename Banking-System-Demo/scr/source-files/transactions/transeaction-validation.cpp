#include <iostream>
#include <vector>
#include <iomanip>
#include "../../header-files/core/core.h"
#include "../../header-files/helpers/helpers.h"
#include "../../header-files/clients/clients.h"

void Deposit(std::vector <stClientData>& vClients)
{
	std::string accNumber;
	stClientData client;
	double DepositAmount;
	char answer;
	while (true)
	{
		accNumber = ReadAccountNumber();
		if (FindClientByAccountNumber(vClients, accNumber, &client))
		{
			ShowClientDetails(client);
			DepositAmount = ReadPositiveNumber("Enter deposit amount", width);
			std::cout << "\n" << std::left << std::setw(width) << "" << "Are you sure you want perfrom this transaction[Y,N]: ";
			std::cin >> answer;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			if (std::tolower(answer) == 'y')
			{
				for (stClientData& tempClient : vClients)
				{
					if (tempClient.accNumber == accNumber)
					{
						tempClient.accBalance += DepositAmount;
						std::cout << "Done successfully, new balance is [" << tempClient.accBalance << "]";
						break;
					}
				}
				break;
			}
			break;
		}
		else
		{
			std::cout << "\n" << std::left << std::setw(width) << "" << "Client with account number [" << accNumber << "] not found.";
			std::cout << "\n" << std::left << std::setw(width) << "" << "Enter another account number: ";
		}
	}
}