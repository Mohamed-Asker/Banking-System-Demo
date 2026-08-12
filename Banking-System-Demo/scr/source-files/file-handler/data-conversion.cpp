#include <iostream>
#include <vector>
#include <string>
#include "../../header-files/file-handler/file-handler.h"
#include "../../header-files/core/core.h"

std::vector <std::string> split(std::string line, const std::string& delimiter)
{
	std::vector <std::string> vTokens;
	std::string word = "";
	std::size_t pos = 0;

	while ((pos = line.find(delimiter)) != std::string::npos)
	{
		word = line.substr(0, pos);
		if (word != "")
		{
			vTokens.push_back(word);
		}
		line.erase(0, pos + delimiter.length());
	}

	if (line != delimiter)
	{
		vTokens.push_back(line);
	}
	return vTokens;
}

stClientData ConvertClientDataLineToRecord(std::string& DataLine, const std::string& delimiter)
{
	std::vector <std::string> vTokens;
	stClientData client;

	vTokens = split(DataLine, delimiter);
	client.accNumber = vTokens[0];
	client.PinCode = vTokens[1];
	client.name = vTokens[2];
	client.phone = vTokens[3];
	client.accBalance = std::stod(vTokens[4]);

	return client;
}