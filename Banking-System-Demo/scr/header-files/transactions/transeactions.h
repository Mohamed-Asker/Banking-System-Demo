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

void DepositTransaction(std::vector <stClientData>& vClients, const std::string& accNumber);

void ShowDepositScreen(std::vector <stClientData>& vClients);

void ShowWithdrawScreen(std::vector <stClientData>& vClients);

void PrintHeaderWithdrawScreen();