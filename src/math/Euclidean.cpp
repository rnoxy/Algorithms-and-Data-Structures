#include<tuple>

#include "math.hpp"

namespace math {

  template<typename T=int>
  T gcd(T a, T b) {
    T mem;
    while (b!=0) {
      mem = b;
      b = a%b;
      a = mem;
    }
    return a;
  }

  template<typename T=int>
  std::tuple<T,T,T> ext_gcd(T a, T b)
  {
    T c, p,q,r,s,nr,ns;
    // int A = a, B = b; // potrzebne do dowodu

    /////////////////////////////////////////////////////////////////
    ///////////////// Rozszerzony algorytm Euklidesa ////////////////
    /////////////////////////////////////////////////////////////////
    p = 1; q = 0;
    r = 0; s = 1;
    while (b != 0)
    {
      // Dowód poprawności: zauważyć, że
      // A*p + B*q = a   oraz   A*r + B*s = b
      nr = p - (a/b)*r;
      ns = q - (a/b)*s;

      p = r;  q = s;
      r = nr; s = ns;

      c = a%b;   // zauważ podobieństwo do zwykłego alg. Euklidesa
      a = b;
      b = c;
      // znowu mamy
      // A*p + B*q = a   oraz   A*r + B*s = b
    }
    /////////////////////////////////////////////////////////////////
    return std::make_tuple(a,p,q);
  }

  int   gcd(int a  , int b  ) { return gcd<int>  (a,b); }
  llong gcd(llong a, llong b) { return gcd<llong>(a,b); }

  std::tuple<int,int,int>       ext_gcd(int a, int b)     { return ext_gcd<int>  (a,b); }
  std::tuple<llong,llong,llong> ext_gcd(llong a, llong b) { return ext_gcd<llong>(a,b); }

}
