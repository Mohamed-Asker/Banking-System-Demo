#include <iostream>
#include <iomanip>
#include "../../header-files/core/core.h"

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