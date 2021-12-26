#include <iostream>
#include <stdexcept>
#include <string>
#include "parse.h"

unsigned long long int Fibonacci(int n) 
{
if (n < 0) 
	throw std::invalid_argument("Should not be negative!!\n");
if (n == 0) 
{
	return 0;
} if(n == 1) 
{
	 return 0;
} if(n == 2){
	return 1;
}else 
{
unsigned long long int result = Fibonacci(n - 1) + Fibonacci(n - 2) + 1;
return result;
}
}
int main() {
	std::string input;
	int i(0);	
	while(true) {	
	std::cout << "H - help; Q - quit\n";
	std::cout << "Or enter a number: \n";
	std::cin >> input;
	InputResult result = Parse(input, i);
	if (result == InputResult::HELP) 
	{
		std::cout << "Help\n";
	}
	else if (result == InputResult::NUMBER)
	{
		std::cout << "Sum of first " << i << " fibonacci numbers is:\n";
		std::cout << Fibonacci(i) << "\n";
	}
	else if (result == InputResult::QUIT)
	{
		break;
	}
	else
	{
		std::cout << "Enter a positive number or command\n";
		continue;
	}
	}
return 0;
}
