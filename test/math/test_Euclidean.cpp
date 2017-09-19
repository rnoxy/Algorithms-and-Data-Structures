#include <iostream>
#include <tuple>

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


TEST(ExtendedEuclidean_test, test_gcd_and_ext_gcd)
{
  int a = 238476293, b = 2376287;
  EXPECT_EQ( std::get<0>(ext_gcd(a,b)) , gcd(a,b) );
}


TEST(ExtendedEuclidean_test, test_gcd_and_ext_gcd_again)
{
  for (int a=1; a<=1000; a++) for (int b=1; b<=1000; b++)
  {
    int d,x,y;
    std::tie(d,x,y) = ext_gcd(a,b);
    EXPECT_EQ( gcd(a,b), d      );
    EXPECT_EQ( gcd(a,b), a*x+b*y);
  }
}
