#include <iostream>
#include <vector>
#include "../../header-files/clients/clients.h"
#include "../../header-files/core/core.h"
#include "../../header-files/file-handler/file-handler.h"
#include "../../header-files/helpers/helpers.h"

void ManageClient()
{
	bool isRunning = true;
	enMainMnueOptions option;
	std::vector <stClientData> vClients = LoadDataFromFileToVector();

	do
	{
		ResetScreen();
		PrintMainMnueScreen();
		option = static_cast<enMainMnueOptions>(ReadNumberInRange("Choose what do you want to do", 1, 6, width));

		switch (option)
		{
		case enMainMnueOptions::ShowClientsList:
			ShowClientsListScreen(vClients);
			PressAnyKey();
			break;

		case enMainMnueOptions::AddNewClient:
			ShowAddNewClientScreen(vClients);
			PressAnyKey(width);
			break;

		case enMainMnueOptions::DeleteClient:
			ShowDeleteClientScreen(vClients);
			PressAnyKey(width);
			break;

		case enMainMnueOptions::UpdateClient:
			ShowUpdateClientScreen(vClients);
			PressAnyKey(width);
			break;

		case enMainMnueOptions::FindClient:
			ShowFindClientScreen(vClients);
			PressAnyKey(width);
			break;

		case enMainMnueOptions::Exit:
			ResetScreen();
			PrintHeaderEndScreen();
			isRunning = false;
			break;
		}
	} while (isRunning);
}

int main()
{
	ManageClient();
}