#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Function To Check Feasibilty
bool isFeasible(int mid, int arr[], int n, int k)
{
    int pos = arr[0], element = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - pos >= mid)
        {
            pos = arr[i];
            element++;
            if (element == k)
            {
                return true;
            }
        }
    }
    return false;
}

// Minimum Maximum Distance
int Largest_Min_Distance(int arr[], int n, int k)
{
    sort(arr, arr + n);

    int result = -1;
    int start = 1, end = arr[n - 1];
    while (start < end)
    {
        int mid = start + (end - start) / 2;

        if (isFeasible(mid, arr, n, k))
        {
            result = max(result, mid);
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return result;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    int arr[]={1,2,8,4,9};
    int n=5,k=3;

    cout<<"Largest Minimum Distance : "<<Largest_Min_Distance(arr,n,k);

    return 0;
}