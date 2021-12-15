#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

//Trapping Rain Water Problem
int trapping_rainwater(vector<int> a)
{
    int ans = 0, n = a.size();
    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && a[st.top()] < a[i])
        {
            int curr = st.top();
            st.pop();

            if (st.empty())
            {
                break;
            }

            int diff = i - st.top() - 1;
            ans += (min(a[i], a[st.top()]) - a[curr]) * diff;
        }
        st.push(i);
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

    cout << trapping_rainwater(a) << endl;

    return 0;
}