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
unsigned long long int result = Fibonacci(n - 1) + Fibonacci(n -2);
return result;
}
}
int main() {
std::cout << Fibonacci(10) << "\n";
return 0;
}
