#include <bits/stdc++.h>

using namespace std;

// Top K Most Frequent Element in Array
void Top_K_Frequent_Element(vector<int> a, int k)
{
    map<int, int> freq;
    // Counting Frequencies
    for (int i = 0; i < a.size(); i++)
    {
        freq[a[i]]++;
    }

    vector<pair<int, int>> ans;
    map<int, int>::iterator i;
    // Storing Frequencies in Vector of Pairs
    for (i = freq.begin(); i != freq.end(); i++)
    {
        ans.push_back(make_pair(i->second, i->first));
    }

    // Sorting Vector on Bases of Frequencies (Decreasing Order)
    sort(ans.begin(), ans.end(), greater<pair<int, int>>());

    vector<pair<int, int>>::iterator it;
    // Printing K Top Most Frequent Elements
    for (it = ans.begin(); it != ans.end(); it++)
    {
        if (k > 0)
        {
            cout << it->second << " -> " << it->first << endl;
        }
        k--;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    Top_K_Frequent_Element(a, k);

    return 0;
}