#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Subarray With Sum Zero
int Subarray_Sum_Zero(vector<int> a, int n)
{

    map<int, int> m;

    int prefixsum = 0;
    for (int i = 0; i < n; i++)
    {
        prefixsum += a[i];
        m[prefixsum]++;
    }

    int ans = 0;

    map<int, int>::iterator it;

    for (it = m.begin(); it != m.end(); it++)
    {
        int n = it->second;

        ans += (n * (n - 1)) / 2;

        if (it->first == 0)
        {
            ans += it->second;
        }
    }
    return ans;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout<<Subarray_Sum_Zero(a,n);

    return 0;
}