#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Maximum Consecutive Ones
    int i = 0, zerocount = 0, ans = 0;
    for (int j = 0; j < n; j++)
    {
        if (a[j] == 0)
        {
            zerocount++;
        }
        while (zerocount > k)
        {
            if (a[i] == 0)
            {
                zerocount--;
            }
            i++;
        }
        ans = max(ans, j - i + 1);
    }

    cout << ans;

    return 0;
}