#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Factorial of a number using Recursion
int facto(int n)
{
    //base case
    if (n == 0)
        return 1;
    int prevfacto = facto(n - 1);
    return n * prevfacto;
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    int n;
    cin >> n;
    cout << facto(n);
    return 0;
}