#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Finding N-th Catalan Numbers
int catalan(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    int ans = 0;

    for (int i = 0; i <= n - 1; i++)
    {
        ans += catalan(i) * catalan(n - i - 1);
    }
    return ans;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    cout << "Catalan Numbers are ";
    for (int i = 0; i < 10; i++)
    {
        cout << catalan(i) << " ";
    }

    return 0;
}