#include "pch.h"
#include "../Calculator/cal.cpp"

TEST(TestCaseName, getSum) {
	EXPECT_EQ(2, getSum(1, 1));
}
TEST(TestCaseName, getGop) {
	EXPECT_EQ(8, getGop(2, 4));
}
TEST(TestCaseName, getZegop) {
	EXPECT_EQ(4, getZegop(2));
}
TEST(TestCaseName, getMinus) {
	EXPECT_EQ(2, getMinus(3, 1));
}
TEST(TestCaseName, getDivide) {
	EXPECT_EQ(2, getDivide(4, 2));
}
TEST(TestCaseName, getSumSum) {
	EXPECT_EQ(5, getSumSum(1, 1, 3));
}