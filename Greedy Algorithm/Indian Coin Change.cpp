#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Indian Coin Change
int Indian_Coin_Change(vector<int> &a, int x)
{
    int ans = 0;

    sort(a.begin(), a.end(), greater<int>());

    for (int i = 0; i < a.size(); i++)
    {
        ans += x / a[i];

        x -= x / a[i] * a[i];
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

    int x;
    cin >> x;

    cout << Indian_Coin_Change(a, x);

    return 0;
}