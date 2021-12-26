#include "gtest/gtest.h"

unsigned long long int Fibonacci(int n);

TEST(FibonacciSumTest, Zero_Input){
EXPECT_EQ(Fibonacci(0), 0);
}

TEST(FibonacciSumTest, Non_zero_Input){
EXPECT_EQ(Fibonacci(1), 0);
EXPECT_EQ(Fibonacci(2), 1);
EXPECT_EQ(Fibonacci(3), 2);
EXPECT_EQ(Fibonacci(4), 4);
EXPECT_EQ(Fibonacci(5), 7);
EXPECT_EQ(Fibonacci(6), 12);
}

int main()
{
	::testing::InitGoogleTest();
	return RUN_ALL_TESTS();
}
