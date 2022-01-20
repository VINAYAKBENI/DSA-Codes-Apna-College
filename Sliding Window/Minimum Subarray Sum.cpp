#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Minimum Subarray Sum
int Minimum_Subarray_Sum(vector<int> a, int n, int k)
{
    int ans = INT_MAX, curr = 0;

    for (int i = 0; i < k; i++)
    {
        curr += a[i];
    }
    ans = min(ans, curr);
    cout << curr << " ";

    for (int i = 1; i < n - k + 1; i++)
    {
        curr -= a[i - 1];
        curr += a[i + k - 1];
        ans = min(ans, curr);
        cout << curr << " ";
    }
    e 
    return ans;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    int n,k;
    cin >> n>>k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << Minimum_Subarray_Sum(a, n, k);
    return 0;
}