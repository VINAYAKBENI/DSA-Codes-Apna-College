#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Findind Peak Element
int Find_Peak_Element(int arr[], int n, int low, int high)
{
    int mid = low + (high - low) / 2;

    if (((mid == 0) || (arr[mid - 1] <= arr[mid])) && ((mid == n - 1) || (arr[mid + 1] <= arr[mid])))
    {
        return mid;
    }

    else if (mid > 0 && arr[mid - 1] > arr[mid])
    {
        return Find_Peak_Element(arr, n, low, mid - 1);
    }
    else
    {
        return Find_Peak_Element(arr, n, mid + 1, high);
    }
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    int arr[] = {0,6,8,5,7,9};
    int n = 6;
    cout << "Peak element Index : " << Find_Peak_Element(arr, n, 0, n-1);

    return 0;
}