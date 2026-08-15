#include <iostream>
#include <iomanip>
#include <vector>
#include "../../header-files/core/core.h"
#include "../../header-files/helpers/helpers.h"

void PrintHeaderTransactionsMnue()
{
	std::cout << "\n\n";
	printf("%*s", 87, "-----------------------------------------------------\n");
	printf("%*s", 80, "* * *  TRANSACTIONS MNUE SCREEN  * * * \n");
	printf("%*s", 87, "-----------------------------------------------------\n");
}

void PrintTransactionsMnue()
{
	PrintHeaderTransactionsMnue();
	std::cout << std::left << std::setw(width) << "" << "[1] Deposit.\n";
	std::cout << std::left << std::setw(width) << "" << "[2] Withdraw.\n";
	std::cout << std::left << std::setw(width) << "" << "[3] Total Balance.\n";
	std::cout << std::left << std::setw(width) << "" << "[4] Main Mnue.\n";
	printf("%*s", 87, "-----------------------------------------------------\n");
}

void PrintHeaderDepositScreen()
{
	std::cout << "\n\n";
	printf("%*s", 87, "-----------------------------------------------------\n");
	printf("%*s", 75, "* * *  DEPOSIT SCREEN  * * * \n");
	printf("%*s", 87, "-----------------------------------------------------\n");
}

void PrintHeaderWithdrawScreen()
{
	std::cout << "\n\n";
	printf("%*s", 87, "-----------------------------------------------------\n");
	printf("%*s", 76, "* * *  WITHDRAW SCREEN  * * * \n");
	printf("%*s", 87, "-----------------------------------------------------\n");
}

void PrintHeaderBalanceList(std::size_t NumberOfClients)
{
	std::cout << "\n\n";
	std::cout << std::left << std::setw(width + 15) << "" << "Balance list (" << NumberOfClients << GetWordForm(NumberOfClients);
	std::cout << "\n------------------------------------------------------------------------------------------------------------------------\n";
	std::cout << "|" << std::left << std::setw(30) << "Account Number";
	std::cout << "|" << std::left << std::setw(56) << "Client Name";
	std::cout << "|" << std::left << std::setw(30) << "Balance" << "|";
	std::cout << "\n------------------------------------------------------------------------------------------------------------------------\n";
	
}

void PrintClientBalance(const stClientData& client)
{
	std::cout << "|" << std::left << std::setw(30) << client.accNumber;
	std::cout << "|" << std::left << std::setw(56) << client.name;
	std::cout << "|" << std::left << std::setw(30) << client.accBalance << "|";
}

void ShowBalanceList(std::vector <stClientData>& vClients)
{
	ResetScreen();
	PrintHeaderBalanceList(vClients.size());
	double TotalBalance = 0;
	for (const stClientData& tempClient : vClients)
	{
		PrintClientBalance(tempClient);
		TotalBalance += tempClient.accBalance;
		std::cout << std::endl;
	}
	std::cout << "------------------------------------------------------------------------------------------------------------------------\n";
	std::cout << "Total Balance = " << TotalBalance << "\n";
}