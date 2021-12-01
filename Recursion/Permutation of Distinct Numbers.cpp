#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Permutation of Distinct Numbers
vector<vector<int>> ans;
void permu(vector<int> &a, int idx)
{
    // base case
    if (idx == a.size())
    {
        ans.push_back(a);
        return;
    }
    for (int i = idx; i < a.size(); i++)
    {
        swap(a[i], a[idx]);
        permu(a, idx + 1);
        swap(a[i], a[idx]);
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
    permu(a, 0);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j] << " ";
        }
        e
    }

    // STL Trick
    sort(a.begin(), a.end());
    do
    {
        ans.push_back(a);
    } while (next_permutation(a.begin(), a.end()));
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