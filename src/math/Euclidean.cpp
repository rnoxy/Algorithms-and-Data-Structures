namespace math {

template<typename T>
T gcd(T a, T b)
{
     T mem;
     while (b!=0)
     {
        mem = b;
        b = a%b;
        a = mem;
     }
     return a;
}

int gcd(int a, int b) { return gcd<int>(a,b); }
long long gcd(long long a, long long b) { return gcd<long long>(a,b); }

}
