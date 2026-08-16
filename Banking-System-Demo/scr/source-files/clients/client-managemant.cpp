#include <iostream>
#include <vector>
#include "../../header-files/clients/clients.h"
#include "../../header-files/core/core.h"
#include "../../header-files/file-handler/file-handler.h"
#include "../../header-files/helpers/helpers.h"
#include "../../header-files/transactions/transeactions.h"

void HandelTransactions(std::vector <stClientData>& vClients)
{
	enTransactions TransactionChoice;
	bool GoToMainMnue = false;
	do
	{
		ResetScreen();
		PrintTransactionsMnue();
		TransactionChoice = static_cast<enTransactions>(ReadNumberInRange("Choose what do you want to do [1:4]", 1, 4, width));

		switch (TransactionChoice)
		{
		case enTransactions::Deposit:
			ShowDepositScreen(vClients);
			PressAnyKeyToGoTransactionsMnue(width);
			break;

		case enTransactions::Withdraw:
			ShowWithdrawScreen(vClients);
			PressAnyKeyToGoTransactionsMnue(width);
			break;

		case enTransactions::TotalBalance:
			ShowBalanceList(vClients);
			PressAnyKeyToGoTransactionsMnue();
			break;

		case enTransactions::MainMnue:
			GoToMainMnue = true;
			break;
		}
	} while (!GoToMainMnue);
}

void ManageClient()
{
	bool isRunning = true;
	enMainMnueOptions MnueChoice;
	std::vector <stClientData> vClients = LoadDataFromFileToVector();

	do
	{
		ResetScreen();
		PrintMainMnueScreen();
		MnueChoice = static_cast<enMainMnueOptions>(ReadNumberInRange("Choose what do you want to do [1:7]", 1, 7, width));

		switch (MnueChoice)
		{
		case enMainMnueOptions::ShowClientsList:
			ShowClientsListScreen(vClients);
			PressAnyKeyToGoBackMainMnue();
			break;

		case enMainMnueOptions::AddNewClient:
			ShowAddNewClientScreen(vClients);
			PressAnyKeyToGoBackMainMnue(width);
			break;

		case enMainMnueOptions::DeleteClient:
			ShowDeleteClientScreen(vClients);
			PressAnyKeyToGoBackMainMnue(width);
			break;

		case enMainMnueOptions::UpdateClient:
			ShowUpdateClientScreen(vClients);
			PressAnyKeyToGoBackMainMnue(width);
			break;

		case enMainMnueOptions::FindClient:
			ShowFindClientScreen(vClients);
			PressAnyKeyToGoBackMainMnue(width);
			break;

		case enMainMnueOptions::Transactions:
			HandelTransactions(vClients);
			break;

		case enMainMnueOptions::Exit:
			ResetScreen();
			PrintHeaderEndScreen();
			isRunning = false;
			break;
		}
	} while (isRunning);
}