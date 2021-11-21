#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

//Finding All Prime Number less than N
//Finding smallest prime factor of a number using Sieve
void smallestprimefacot_sieve(int n)
{
    int spf[n] = {0};
    //Initializing each no. as prime factor of itself
    for (int i = 2; i <= n; i++)
    {
        spf[i] = i;
    }
    //Marking the multiples of prime no.
    for (int i = 2; i <= n; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= n; j += i)
            {
                if (spf[j] == j)
                {
                    spf[j] = i;
                }
            }
        }
    }

    //finding prime factor of the no.
    while (n != 1)
    {
        cout << spf[n] << " ";
        n = n / spf[n];
    }
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    int n;
    cin >> n;
    smallestprimefacot_sieve(n);
    return 0;
}