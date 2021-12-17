#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// 3 Sum With Duplicates
// Apporach 1 (Brute Force)
vector<vector<int>> threesum(vector<int> &v, int val)
{
    vector<vector<int>> ans;
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (v[i] + v[j] + v[k] == val)
                {
                    ans.push_back({v[i], v[j], v[k]});
                }
            }
        }
    }
    return ans;
}

// Apporach 2 (Two Pointer)
vector<vector<int>> threesum_two_pointer(vector<int> &v, int val)
{
    sort(v.begin(), v.end());
    vector<vector<int>> ans;
    for (int i = 0; i < v.size(); i++)
    {
        int a = i + 1, b = v.size() - 1;
        while (a < b)
        {
            if ((v[a] + v[b]) == (val - v[i]))
            {
                ans.push_back({v[i], v[a], v[b]});
                a++;
            }
            else if ((v[a] + v[b]) < (val - v[i]))
            {
                a++;
            }
            else
            {
                b--;
            }
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
    vector<vector<int>> ans = threesum_two_pointer(a, 0);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        e
    }

    return 0;
}