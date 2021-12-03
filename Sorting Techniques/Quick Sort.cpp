#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Quick Sort Technique
// Partition Function
int partation(int arr[], int l, int r)
{

    int pivot = arr[r];
    int i = l - 1;
    // Finding Location of Pivot
    for (int j = l; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[j], arr[i]);
        }
    }
    swap(arr[r], arr[i + 1]);
    return i + 1;
}

// Quick sort function
void quicksort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pi = partation(arr, l, r);
        quicksort(arr, l, pi - 1);
        quicksort(arr, pi + 1, r);
    }
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    int arr[] = {5, 4, 3, 20, 1};
    quicksort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}