#pragma once
#include <iostream>
#include <vector>
#include "../../header-files/core/core.h"

void PrintHeaderShowClientsListScreen(const std::size_t& NumberOfClients);

void PrintHeaderAddNewClientScreen();

void PrintClientCard(const stClientData& client);

void ShowClientsListScreen(std::vector <stClientData>& vClients);

void ShowAddNewClientScreen(std::vector <stClientData>& vClients);

bool FindClientByAccountNumber(std::vector <stClientData>& vClients, const std::string& accNumber, stClientData* ptrClient = nullptr);

stClientData ReadNewClient(std::vector <stClientData>& vClients);

void ShowDeleteClientScreen(std::vector <stClientData>& vClients);

void PrintHeaderDeleteClientScreen();

void ShowClientDetails(const stClientData& client);

bool DeleteClientByAccountNumber(std::vector <stClientData>& vClients, const std::string& accNumber);

void PrintHeaderUpdateClientScreen();

bool UpdateClientByAccountNumber(std::vector <stClientData>& vClients, const std::string& accNumber);

void ShowUpdateClientScreen(std::vector <stClientData>& vClients);

void PrintHeaderFindClientScreen();

void ShowFindClientScreen(std::vector <stClientData>& vClients);

void PrintHeaderEndScreen();

void ManageClient();