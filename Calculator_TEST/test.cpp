#include "pch.h"
#include "../Calculator/cal.cpp"

TEST(TestCaseName, TestName) {
	EXPECT_EQ(2, getSum(1, 1));
	EXPECT_EQ(8, getGop(2, 4));
	EXPECT_EQ(4, getZegop(2));
	EXPECT_EQ(2, getMinus(3, 1));
	EXPECT_EQ(2, getDivide(4, 2));
	EXPECT_EQ(5, getSumSum(1, 1, 3));
}