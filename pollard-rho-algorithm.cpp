#include<bits/stdc++.h>
using namespace std;

long long int modular_pow(long long int base, int expo,
                          long long int mod)
{
    long long int result = 1;

    while (expo > 0)
    {
        if (expo & 1)
            result = (result * base) % mod;
        expo = expo >> 1;

        base = (base * base) % mod;
    }
    return result;
}

long long int PollardRho(long long int number)
{
    srand (time(NULL));

    if (n==1) return n;

    if (n % 2 == 0) return 2;

    long long int x = (rand()%(number-2))+2;
    long long int y = x;
    long long int c_num = (rand()%(number-1))+1;
    long long int d_num = 1;


    while (d==1)
    {
        x = (modular_pow(x, 2, number) + c_num + n)%number;
        y = (modular_pow(y, 2, number) + c_num + n)%number;
        y = (modular_pow(y, 2, number) + c_num + n)%number;
        d = __gcd(abs(x-y), number);

        if (d_num == number) 
        	return PollardRho(number);
    }

    return d_num;
}

int main()
{
    long long int number = 10967535067;
    printf("The result is: %lld is %lld.",
          number, PollardRho(number));
    return 0;
}