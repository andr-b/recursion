#pragma once
#include <string>

enum class InputResult
{
HELP,
QUIT,
NUMBER
};

InputResult Parse(const std::string &input, int &i);
