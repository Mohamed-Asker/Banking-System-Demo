#pragma once
#include <iostream>

bool isNumberInRange(int number, int from, int to);

int ReadNumberInRange(const std::string& msg, int from, int to, int width = 0);

void ResetScreen();

std::string GetWordForm(const std::size_t& number);

void PressAnyKeyToGoBackMainMnue(int width = 0);

std::string ReadAccountNumber();

double ReadPositiveNumber(const std::string& msg, const int width = 0, const int msgWidth = 0);

void PressAnyKeyToGoTransactionsMnue(int width = 0);