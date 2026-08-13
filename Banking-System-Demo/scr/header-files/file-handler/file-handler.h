#pragma once
#include <iostream>
#include <vector>
#include "../core/core.h"

std::vector <std::string> split(std::string line, const std::string& delimiter);

std::vector <stClientData> LoadDataFromFileToVector();

std::string ConvertClientRecordToDataLine(const stClientData& client, const std::string& delimiter);

stClientData ConvertClientDataLineToRecord(std::string& DataLine, const std::string& delimiter);

void SaveDataToFile(std::vector <stClientData>& vClients, const std::string& FileName, const std::string& delimiter);