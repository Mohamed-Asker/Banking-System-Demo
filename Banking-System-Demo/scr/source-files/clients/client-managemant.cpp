#include <iostream>
#include <vector>
#include "../../header-files/clients/clients.h"
#include "../../header-files/core/core.h"
#include "../../header-files/file-handler/file-handler.h"
#include "../../header-files/helpers/helpers.h"

void ManageClient()
{
	bool isRunning = true;
	enMainMnueOptions MnueChoice;
	std::vector <stClientData> vClients = LoadDataFromFileToVector();

	do
	{
		ResetScreen();
		PrintMainMnueScreen();
		MnueChoice = static_cast<enMainMnueOptions>(ReadNumberInRange("Choose what do you want to do", 1, 7, width));

		switch (MnueChoice)
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

		case enMainMnueOptions::Transactions:
			enTransactions TransactionChoice;
			do
			{
				ResetScreen();
				PrintTransactionsMnue();

			} while (1);
			break;

		case enMainMnueOptions::Exit:
			ResetScreen();
			PrintHeaderEndScreen();
			isRunning = false;
			break;
		}
	} while (isRunning);
}