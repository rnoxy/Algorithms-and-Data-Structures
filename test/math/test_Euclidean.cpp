#include <iostream>
#include "gtest/gtest.h"

#include "math.hpp"

using namespace math;

TEST(Euclidean_test, test)
{
    EXPECT_EQ(gcd(4,5),  1);
    EXPECT_EQ(gcd(45,45), 45);
    EXPECT_EQ(gcd(2*2*3*7*7*13,2*3*5*7*19), 2*3*7);
    EXPECT_EQ(gcd(1,1000000), 1);
    EXPECT_EQ(gcd(2,1000000), 2);
    EXPECT_EQ(gcd(2LL,1000000000000LL), 2LL);
    EXPECT_EQ(gcd(10000000043000LL,10000000004500LL), 5500LL);
}
