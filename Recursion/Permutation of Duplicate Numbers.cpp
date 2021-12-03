#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Permutation of Duplicate Numbers
vector<vector<int>> ans;
void permu(vector<int> a, int idx)
{
    // base case
    if (idx == a.size())
    {
        ans.push_back(a);
        return;
    }
    for (int i = idx; i < a.size(); i++)
    {
        if (i != idx && a[i] == a[idx]){
            continue;
        }
        swap(a[i], a[idx]);
        permu(a, idx + 1);
    }
    return;
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    int n;
    cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    permu(a, 0);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j] << " ";
        }
        e
    }

    
    return 0;
}