#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Sum till n using recursion
int sum(int n)
{
    //base case
    if (n == 0)
        return 0;
    int prevsum = sum(n - 1);
    return n + prevsum;
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}