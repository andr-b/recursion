#include <stdexcept>


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
} if (n == 2)
{
	return 1;
}else 
{
unsigned long long int result = Fibonacci(n - 1) + Fibonacci(n - 2) + 1;
return result;
}
}
