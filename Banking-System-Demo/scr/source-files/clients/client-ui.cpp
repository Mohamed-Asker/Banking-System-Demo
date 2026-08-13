#include <iostream>
#include <iomanip>
#include "../../header-files/helpers/helpers.h"
#include "../../header-files/core/core.h"



void PrintHeaderShowClientsListScreen(const std::size_t& NumberOfClients)
{
	std::cout << "\n\n";
	std::cout << std::setw(45) << ""  << "Clients list (" << NumberOfClients << GetWordForm(NumberOfClients);
	std::cout << "\n------------------------------------------------------------------------------------------------------------------------\n";
	std::cout << "|" << std::left << std::setw(20) << "Account Number";
	std::cout << "|" << std::left << std::setw(15) << "Pin Code";
	std::cout << "|" << std::left << std::setw(40) << "Client Name";
	std::cout << "|" << std::left << std::setw(19) << "Client Phone";
	std::cout << "|" << std::left << std::setw(20) << "Account Balance" << "|";
	std::cout << "\n------------------------------------------------------------------------------------------------------------------------\n";
}

void PrintHeaderAddNewClientScreen()
{
	std::cout << "\n\n";
	printf("%*s", 87, "-----------------------------------------------------\n");
	printf("%*s", 78, "* * *  ADD NEW CLIENT SCREEN  * * *\n");
	printf("%*s", 87, "-----------------------------------------------------\n");
	std::cout << std::left << std::setw(width) << "" << "Adding new client:\n";
}

void PrintClientCard(const stClientData& client)
{
	std::cout << "|" << std::left << std::setw(20) << client.accNumber;
	std::cout << "|" << std::left << std::setw(15) << client.PinCode;
	std::cout << "|" << std::left << std::setw(40) << client.name;
	std::cout << "|" << std::left << std::setw(19) << client.phone;
	std::cout << "|" << std::left << std::setw(20) << client.accBalance << "|";
}

void PrintHeaderDeleteClientScreen()
{
	std::cout << "\n\n";
	printf("%*s", 87, "-----------------------------------------------------\n");
	printf("%*s", 77, "* * *  DELETE CLIENT SCREEN  * * *\n");
	printf("%*s", 87, "-----------------------------------------------------\n");
	std::cout << std::left << std::setw(width) << "" << "Deleting client:\n";
}

void ShowClientDetails(const stClientData& client)
{
	std::cout << "\n" << std::left << std::setw(width) << "" << "The following are the clients detalis:";
	std::cout << "\n" << std::left << std::setw(width) << "" << "--------------------------------------";
	std::cout << "\n" << std::left << std::setw(width) << "" << std::setw(16) << "Account Number" << ": " << client.accNumber;
	std::cout << "\n" << std::left << std::setw(width) << "" << std::setw(16) << "Pin Code" << ": " << client.PinCode;
	std::cout << "\n" << std::left << std::setw(width) << "" << std::setw(16) << "Client Name" << ": " << client.name;
	std::cout << "\n" << std::left << std::setw(width) << "" << std::setw(16) << "Client Phone" << ": " << client.phone;
	std::cout << "\n" << std::left << std::setw(width) << "" << std::setw(16) << "Account Balance" << ": " << client.accBalance;
	std::cout << "\n" << std::left << std::setw(width) << "" << "--------------------------------------";
}

void PrintHeaderUpdateClientScreen()
{
	std::cout << "\n\n";
	printf("%*s", 87, "-----------------------------------------------------\n");
	printf("%*s", 77, "* * *  UPDATE CLIENT SCREEN  * * *\n");
	printf("%*s", 87, "-----------------------------------------------------\n");
	std::cout << std::left << std::setw(width) << "" << "Updating client:\n";
}