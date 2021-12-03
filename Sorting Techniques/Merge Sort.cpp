#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Merge Sort Technique
// Merging Function
void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1, n2 = r - mid;
    int a[n1], b[n2];
    // Creating 1st temp array
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    // Creating 2nd temp array
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + i + 1];
    }

    int i = 0, j = 0, k = l;
    // Merging Sorted Array Into Original Array
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            i++;
        }
        else
        {
            arr[k] = b[j];
            j++;
        }
        k++;
    }
    // To add leftover elements of 1st array
    while (i < n1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }
    // To add leftover elements of 2nd array
    while (j < n2)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
}

// Merge sort function
void mergesort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, r);

        merge(arr, l, mid, r);
    }
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    int arr[] = {5, 4, 3, 2, 1};
    mergesort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}