#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Largest Rectangle area (Brute Force)
int largest_rectangle(vector<int> a)
{
    int ans = 0;
    // Selecting one element and Finding area with next element by finding minimum
    for (int i = 0; i < a.size(); i++)
    {
        int minh = INT_MAX;
        for (int j = i; j < a.size(); j++)
        {
            minh = min(minh, a[j]);
            int len = j - i + 1;
            ans = max(ans, len * minh);
        }
    }
    return ans;
}

int largest_rectangle_stack(vector<int> a)
{
    int ans = 0, n = a.size(), i = 0;
    stack<int> st;
    // adding 0 height element so that the stack can get empty at last( Right smallest value )
    a.push_back(0);
    while (i < n + 1)
    {
        // Checking wheter next element is small or not (Right samllest value)
        while (!st.empty() && a[st.top()] > a[i])
        {
            int t = st.top();
            int h = a[t];
            st.pop();
            // If its the last element in stack ( smallest element )
            if (st.empty())
            {
                // len= i-0 ( left smallest value )
                ans = max(ans, h * i);
            }
            else
            {
                // len is till prev element in stack ( left smallest value )
                int len = i - st.top() - 1;
                ans = max(ans, h * len);
            }
        }

        st.push(i);
        i++;
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

    cout << largest_rectangle(a) << endl;

    cout << largest_rectangle_stack(a) << endl;

    return 0;
}