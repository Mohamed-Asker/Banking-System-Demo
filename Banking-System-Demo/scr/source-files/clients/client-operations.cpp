#include <iostream>
#include <vector>
#include <iomanip>
#include "../../header-files/clients/clients.h"
#include "../../header-files/core/core.h"
#include "../../header-files/helpers/helpers.h"
#include "../../header-files/file-handler/file-handler.h"

void ShowClientsListScreen(std::vector <stClientData>& vClients)
{
	ResetScreen();
	PrintHeaderShowClientsListScreen(vClients.size());
	for (const stClientData& client : vClients)
	{
		PrintClientCard(client);
		std::cout << std::endl;
	}
	std::cout << "------------------------------------------------------------------------------------------------------------------------\n";
}

void ShowAddNewClientScreen(std::vector <stClientData>& vClients)
{
	ResetScreen();
	PrintHeaderAddNewClientScreen();
	vClients.push_back(ReadNewClient(vClients));
	SaveDataToFile(vClients);
	std::cout << "\n" << std::left << std::setw(width) << "" << "Client added successfully." << std::endl;
}

void ShowDeleteClientScreen(std::vector <stClientData>& vClients)
{
	ResetScreen();
	PrintHeaderDeleteClientScreen();
	std::string accNumber = ReadAccountNumber();
	DeleteClientByAccountNumber(vClients, accNumber);
}

void ShowUpdateClientScreen(std::vector <stClientData>& vClients)
{
	ResetScreen();
	PrintHeaderUpdateClientScreen();
	std::string accNumber = ReadAccountNumber();
	UpdateClientByAccountNumber(vClients, accNumber);
}

void ShowFindClientScreen(std::vector <stClientData>& vClients)
{
	ResetScreen();
	PrintHeaderFindClientScreen();
	std::string accNumber = ReadAccountNumber();
	stClientData client;
	if (FindClientByAccountNumber(vClients, accNumber, &client))
	{
		ShowClientDetails(client);
		std::cout << "\n";
	}
	else
	{
		std::cout << "\n" << std::left << std::setw(width) << "" << "Client with account number [" << accNumber << "] not found.\n";
	}
}