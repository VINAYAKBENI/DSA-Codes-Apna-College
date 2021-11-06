#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;
//Asked in Amazon , accolite , Samsung , Snapdeal
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    //Smallest Positive Missing Number
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int N = 10;
    bool arr[N];
    for (int i = 0; i < N; i++)
    {
        arr[i] = 0;
    }
    //Checking the Numbers are present or Not
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            arr[a[i]] = 1;
        }
    }
    //Finding the Minimum Missing Number
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == 0)
        {
            cout << i;
            break;
        }
    }

    return 0;
}