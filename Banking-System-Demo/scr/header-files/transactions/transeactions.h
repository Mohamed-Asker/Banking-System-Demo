#pragma once
#include <iostream>
#include <vector>
#include "../../header-files/core/core.h"

enum enTransactions
{
	Deposit = 1,
	Withdraw = 2,
	TotalBalance = 3,
	MainMnue = 4
};

void PrintTransactionsMnue();

void PrintHeaderDepositScreen();

bool DepositTransaction(std::vector <stClientData>& vClients, const std::string& accNumber, double amount);

void ShowDepositScreen(std::vector <stClientData>& vClients);

void ShowWithdrawScreen(std::vector <stClientData>& vClients);

void PrintHeaderWithdrawScreen();

void ShowBalanceList(std::vector <stClientData>& vClients);