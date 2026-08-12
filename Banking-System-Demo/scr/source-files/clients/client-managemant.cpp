#include <iostream>
#include <vector>
#include "../../header-files/clients/clients.h"
#include "../../header-files/core/core.h"
#include "../../header-files/file-handler/file-handler.h"
#include "../../header-files/helpers/helpers.h"

void ManageClient(const std::string& FileName, const std::string& delimiter)
{
	bool isRunning = true;
	enMainMnueOptions option;
	std::vector <stClientData> vClients = LoadDataFromFileToVector(FileName, delimiter);

	do
	{
		ResetScreen();
		PrintMainMnueScreen();
		option = static_cast<enMainMnueOptions>(ReadNumberInRange("Choose what do you want to do", 1, 6, 33));

		switch (option)
		{
			//case enMainMnueScreenOptions::ShowClientList:

		}

	} while (isRunning);
}

int main()
{
	ManageClient("FileName", "//");
	return 0;
}