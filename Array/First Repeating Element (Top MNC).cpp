#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    // First Repeating Element in Array

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    //Declaring Size of Array of Index
    const int N = 1e6 + 1;
    int index[N];
    //Intializing array with -1
    for (int i = 0; i < 7; i++)
    {
        index[i] = -1;
    }
    //Initalizing minimum Index with int max
    int minindex = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (index[a[i]] != -1)
        {
            minindex = min(index[a[i]], minindex);
        }
        else
        {
            index[a[i]] = i;
        }
    }
    //Checking return Condition
    if (minindex == INT_MAX)
    {
        cout << "-1";
    }
    else
    {
        cout << minindex + 1;
    }
    return 0;
}