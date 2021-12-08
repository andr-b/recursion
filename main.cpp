#include <iostream>
#include <stdexcept>

unsigned long long int Fibonacci(size_t n) 
{
if (n < 0) 
	throw std::invalid_argument("Should not be negative!!\n");
if (n == 0) 
{
	return 0;
} if(n == 1) 
{
	 return 1;
}else 
{
unsigned long long int result = Fibonacci(n - 1) + Fibonacci(n -2) + 1;
return result;
}
}
int main() {
	size_t i = 0;
	std::cin >> i;
std::cout << Fibonacci(i) << "\n";
return 0;
}
