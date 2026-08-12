#pragma once
#include <iostream>
#include <vector>
#include "../../header-files/core/core.h"

void PrintHeaderShowClientsListScreen(const std::size_t& NumberOfClients);

void PrintHeaderAddNewClientScreen();

void PrintClientCard(const stClientData& client);

void ShowClientsListScreen(std::vector <stClientData>& vClients);

void ShowAddNewClientScreen(std::vector <stClientData>& vClients);