#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

//Finding All Prime Number less than N
//Sieve of Eratosthenes
void Primesieve(int n)
{
    int prime[n] = {0};
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = 1;
            }
        }
    }
    for (int i = 2; i < n; i++)
    {
        if (prime[i] == 0)
        {
            cout << i << " ";
        }
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
    Primesieve(n);
    return 0;
}