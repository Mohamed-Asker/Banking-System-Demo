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

void PrintClientCard(const stClientData& client)
{
	std::cout << "|" << std::left << std::setw(20) << client.accNumber;
	std::cout << "|" << std::left << std::setw(15) << client.PinCode;
	std::cout << "|" << std::left << std::setw(40) << client.name;
	std::cout << "|" << std::left << std::setw(19) << client.phone;
	std::cout << "|" << std::left << std::setw(20) << client.accBalance << "|";
}