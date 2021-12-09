#include "parse.h"

InputResult Parse(const std::string &input, int &i) 
{
	if (input == "H")
	{
		return InputResult::HELP;
	}
	if (input == "Q")
	{
		return InputResult::QUIT;
	}
	if (std::isdigit(input[0])) 
	{
	for (auto x:input)
		{
			if (!std::isdigit(x))
				return InputResult::WRONG;
		}
	i = stoi(input);
	return InputResult::NUMBER;
	}
	return InputResult::WRONG;
}
