#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "../../header-files/core/core.h"


std::vector <stClientData> LoadDataFromFileToVector(const std::string& FileName, const std::string& delimiter)
{
	std::vector <stClientData> vClients;
	std::fstream file;

	file.open(FileName, std::ios::in);
	if (file.is_open())
	{
		stClientData client;
		std::string DataLine;

		while (std::getline(file, DataLine))
		{

		}
	}
}