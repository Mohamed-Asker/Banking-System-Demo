#pragma once
#include <iostream>

bool isNumberInRange(int number, int from, int to);

int ReadNumberInRange(const std::string& msg, int from, int to, int width = 0);

void ResetScreen();

std::string GetWordForm(const std::size_t& number);

void PressAnyKey();

std::string ReadAccountNumber();