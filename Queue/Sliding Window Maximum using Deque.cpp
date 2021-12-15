#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    // Sliding Window Maximum
    //  Apporach 1 Using Multiset
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    multiset<int, greater<int>> s;
    vector<int> ans;

    for (int i = 0; i < k; i++)
    {
        s.insert(a[i]);
    }
    ans.push_back(*s.begin());

    for (int i = k; i < n; i++)
    {
        s.erase(s.lower_bound(a[i - k]));
        s.insert(a[i]);
        ans.push_back(*s.begin());
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    e

    // Apporach 2 Using Deque
    int n1, k1;
    cin >> n1 >> k1;
    vector<int> a1(n1);
    for (int i = 0; i < n1; i++)
    {
        cin >> a1[i];
    }

    deque<int> q;
    vector<int> ans1;

    for (int i = 0; i < k1; i++)
    {
        while (!q.empty() && a1[q.back()] < a1[i])
        {
            q.pop_back();
        }
        q.push_back(i);
    }
    ans1.push_back(a1[q.front()]);

    for (int i = k; i < n; i++)
    {
        if (q.front() == i - k)
        {
            q.pop_front();
        }

        while (!q.empty() && a1[q.back()] < a1[i])
        {
            q.pop_back();
        }
        q.push_back(i);
        ans1.push_back(a1[q.front()]);
    }

     for (int i = 0; i < ans.size(); i++)
    {
        cout << ans1[i] << " ";
    }

    return 0;
}