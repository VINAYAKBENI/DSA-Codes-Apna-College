#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Search in Sorted & Rotated Array
int search_in_rotated_array(int arr[], int key, int left, int right)
{
    if (left > right)
    {
        return -1;
    }

    int mid = left + (right - left) / 2;
    if (arr[mid] == key)
    {
        return mid;
    }
    // Case 1 (Mid in First Sorted Array)
    if (arr[left] <= arr[mid])
    {
        if (key >= arr[left] && key <= arr[mid])
        {
            return search_in_rotated_array(arr, key, left, mid - 1);
        }
        return search_in_rotated_array(arr, key, mid + 1, right);
    }

    // Case 2 (Mid in Second Sorted Array)
    if (key >= arr[mid] && key <= arr[right])
    {
        return search_in_rotated_array(arr, key, mid + 1, right);
    }
    return search_in_rotated_array(arr, key, left, mid - 1);
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    int arr[] = {60, 70, 80, 90, 100, 10, 20, 50};
    int key = 20;

    cout << "Index of Key : " << search_in_rotated_array(arr, key, 0, 7);

    return 0;
}