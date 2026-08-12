#include <iostream>
#include <vector>
#include "../../header-files/clients/clients.h"
#include "../../header-files/core/core.h"
#include "../../header-files/helpers/helpers.h"

void ShowClientsListScreen(std::vector <stClientData>& vClients)
{
	ResetScreen();
	PrintHeaderShowClientsListScreen(vClients.size());
	for (const stClientData& client : vClients)
	{
		PrintClientCard(client);
		std::cout << std::endl;
	}
	std::cout << "\n------------------------------------------------------------------------------------------------------------------------\n";
}

void ShowAddNewClientScreen(std::vector <stClientData>& vClients)
{
	ResetScreen();
	PrintHeaderAddNewClientScreen();

}