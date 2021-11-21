#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Fibonacci of a number using Recursion
int fibo(int n)
{
    //base case
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    return fibo(n - 1) + fibo(n - 2);
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    int n;
    cin >> n;
    cout << fibo(n);
    return 0;
}