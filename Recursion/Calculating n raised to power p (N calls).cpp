#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Calculating n raised to power p using recursion
int power(int n, int p)
{
    //base case
    if (p == 0)
        return 1;
    int prevpower = power(n, p - 1);
    return n * prevpower;
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    int n;
    cin >> n;
    cout << power(n, 4);
    return 0;
}