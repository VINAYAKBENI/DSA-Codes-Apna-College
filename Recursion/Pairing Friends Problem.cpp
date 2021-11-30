#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Pairing Friends Problem
int Pairing_Friend(int n)
{
    if (n <= 2)
        return n;

    return Pairing_Friend(n - 1) + Pairing_Friend(n - 2) * (n - 1);
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    cout << Pairing_Friend(4);

    return 0;
}