#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "../../header-files/file-handler/file-handler.h"
#include "../../header-files/core/core.h"


std::vector <stClientData> LoadDataFromFileToVector()
{
	std::vector <stClientData> vClients;
	std::fstream file;

	file.open(ClientsFileName, std::ios::in);
	if (file.is_open())
	{
		stClientData client;
		std::string DataLine;

		while (std::getline(file, DataLine))
		{
			client = ConvertClientDataLineToRecord(DataLine, delimiter);
			vClients.push_back(client);
		}
		file.close();
	}
	return vClients;
}

void SaveDataToFile(std::vector <stClientData>& vClients)
{
	std::fstream file;
	file.open(ClientsFileName, std::ios::out);
	if (file.is_open())
	{
		std::string DataLine;
		for (const stClientData& tempClient : vClients)
		{
			if (tempClient.MarkForDelete == false)
			{
				DataLine = ConvertClientRecordToDataLine(tempClient, delimiter);
				file << DataLine << std::endl;
			}
		}
		file.close();
	}
}