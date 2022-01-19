#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Counting Frequency Of Unique Elements
void count_frequency(vector<int> &a, int n)
{
    map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }

    map<int, int>::iterator it;
    for (it = freq.begin(); it != freq.end(); it++)
    {
        cout << it->first << " -> " << it->second << endl;
    }
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

    count_frequency(a, n); 

    return 0;
}