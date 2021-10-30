#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;
//Function To Perform Linear Search in Arry
int linearsearch(int a[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] == target)
        {
            return i;
        }
    }
    return -1;
}

//Function To Perform Binary Search
int binarysearch(int a[], int size, int target)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target == a[mid])
            return mid;
        else if (a[mid] < target)
        {
            start = mid + 1;
        }
        else
            end = mid - 1;
    }
    return -1;
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
    int tar;
    cin >> tar;
    cout<<"Linear search element found at "<<linearsearch(arr,n,tar);
    e
    cout << "Binary search element found at " << binarysearch(arr, n, tar);
    return 0;
}