#pragma once
#include <iostream>
#include <vector>
#include "../../header-files/core/core.h"

void PrintHeaderShowClientsListScreen(const std::size_t& NumberOfClients);

void PrintClientCard(const stClientData& client);

void ShowClientsListScreen(std::vector <stClientData>& vClients);