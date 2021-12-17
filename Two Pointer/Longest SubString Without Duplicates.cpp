#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    // Longest SubString Without Duplicates
    string s;
    cin >> s;
    // All charater lies in this range
    vector<int> v(256, -1);
    int maxlen = 0, start = -1;
    for (int i = 0; i < s.size(); i++)
    {
        if (v[s[i]] > start)
        {
            start = v[s[i]];
        }
        v[s[i]] = i;
        maxlen = max(maxlen, i - start);
    }
    cout<<maxlen;
    return 0;
}