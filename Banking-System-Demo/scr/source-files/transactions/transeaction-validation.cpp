#include <iostream>
#include <vector>
#include <iomanip>
#include "../../header-files/core/core.h"
#include "../../header-files/helpers/helpers.h"
#include "../../header-files/clients/clients.h"
#include "../../header-files/file-handler/file-handler.h"

bool DepositTransaction(std::vector <stClientData>& vClients, const std::string& accNumber,double amount)
{
	for (stClientData& tempClient : vClients)
	{
		if (tempClient.accNumber == accNumber)
		{
			tempClient.accBalance += amount;
			SaveDataToFile(vClients);
			std::cout << std::left << std::setw(width) << "" << "Done successfully, new balance is: [" << tempClient.accBalance << "]\n";
			return true;
		}
	}
	return false;
}