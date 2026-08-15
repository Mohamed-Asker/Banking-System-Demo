#include <iostream>
#include <vector>
#include "../../header-files/transactions/transeactions.h"
#include "../../header-files/core/core.h"
#include "../../header-files/helpers/helpers.h"

void ShowDepositScreen(std::vector <stClientData>& vClients)
{
	ResetScreen();
	PrintHeaderDepositScreen();
	DepositTransaction(vClients);
}

void ShowWithdrawScreen(std::vector <stClientData>& vClients)
{
	ResetScreen();
	PrintHeaderWithdrawScreen();
	
}