#include "pch.h"

TEST(TestCaseName, TestName){
	EXPECT_EQ(total(6, 3, 8), 144);
	EXPECT_EQ(total(2, 2, 6), 24);
}