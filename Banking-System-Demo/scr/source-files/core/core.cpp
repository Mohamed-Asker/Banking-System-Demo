#include <iostream>
#include <iomanip>
#include "../../header-files/core/core.h"


void PrintHeaderMainMnue()
{
	std::cout << "\n\n";
	printf("%*s", 87, "-----------------------------------------------------\n");
	printf("%*s", 76, "* * *  MAIN MNUE SCREEN  * * * \n");
	printf("%*s", 87, "-----------------------------------------------------\n");
}

void PrintMainMnueScreen()
{
	PrintHeaderMainMnue();
	std::cout << std::left << std::setw(width) << "" << "[1] Show Clients List.\n";
	std::cout << std::left << std::setw(width) << "" << "[2] Add New Clietn.\n";
	std::cout << std::left << std::setw(width) << "" << "[3] Delete Client.\n";
	std::cout << std::left << std::setw(width) << "" << "[4] Update Client.\n";
	std::cout << std::left << std::setw(width) << "" << "[5] Find Client.\n";
	std::cout << std::left << std::setw(width) << "" << "[6] Transactions.";
	std::cout << std::left << std::setw(width) << "" << "[7] Exit.\n";
	printf("%*s", 87, "-----------------------------------------------------\n");
}

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