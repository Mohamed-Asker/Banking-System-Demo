#pragma once
#include <iostream>
#include <vector>
#include "../core/core.h"

std::vector <std::string> split(std::string line, const std::string& delimiter);

stClientData ConvertClientDataLineToRecord(std::string& DataLine, const std::string& delimiter);