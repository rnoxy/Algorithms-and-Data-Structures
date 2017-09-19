//#ifndef MATH_HPP
//#define MATH_HPP

#include<tuple>

namespace math
{
  typedef long long llong;


  int   gcd(int   a, int b);
  llong gcd(llong a, llong b);

  std::tuple<int,int,int>       ext_gcd(int a, int b);
  std::tuple<llong,llong,llong> ext_gcd(llong a, llong b);

}

//#endif
