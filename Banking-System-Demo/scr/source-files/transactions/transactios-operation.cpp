#include <iostream>
#include <string>
#include <vector>
#include "../../header-files/transactions/transeactions.h"
#include "../../header-files/core/core.h"
#include "../../header-files/helpers/helpers.h"

void ShowDepositScrren(std::vector <stClientData>& vClients)
{
	ResetScreen();
	PrintHeaderDepositScreen();
}