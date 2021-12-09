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
}
