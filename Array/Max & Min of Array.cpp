#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;
//Function To Find Max and Min in Arry
void maxandmin(int a[], int size)
{
    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (a[i] > max)
            max = a[i];
        //max=max(a[i],max);
        if (a[i] < min)
            min = a[i];
        //min=min(a[i],min);
    }
    cout << "Maximum value is " << max <<endl<< "Minimum valve is " << min;
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    maxandmin(arr, n);
    return 0;
}