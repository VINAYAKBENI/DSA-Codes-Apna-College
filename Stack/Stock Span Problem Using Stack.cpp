#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Stock Span Problem
// Apporach 1 (Brute Force)
vector<int> stock_span(vector<int> v)
{
    vector<int> ans(v.size(), 0);
    for (int i = 0; i < v.size(); i++)
    {
        int days = 0;
        for (int j = i; j >= 0; j--)
        {
            if (v[i] >= v[j])
            {
                days++;
            }
            else
            {
                break;
            }
        }
        ans.push_back(days);
    }
    return ans;
}

// Apporach 2 (Using Stack)
vector<int> stock_span_stack(vector<int> v)
{
    vector<int> ans;
    stack<pair<int, int>> st;
    for (int i = 0; i < v.size(); i++)
    {
        int days = 1;
        while (!st.empty() && st.top().first < v[i])
        {
            days += st.top().second;
            st.pop();
        }
        st.push({v[i], days});
        // st.push(make_pair(v[i],days));
        ans.push_back(days);
    }
    return ans;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    vector<int> res = stock_span_stack({100, 80, 60, 70, 60, 75, 85});
    for (auto i : res)
    {
        cout << i << " ";
    }
    return 0;
}