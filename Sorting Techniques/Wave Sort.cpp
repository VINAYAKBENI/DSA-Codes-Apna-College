#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Wave Sort
void wavesort(int arr[], int n)
{
    for (int i = 1; i < n; i += 2)
    {
        if (arr[i] > arr[i - 1])
        {
            swap(arr[i], arr[i - 1]);
        }
        if (arr[i] > arr[i + 1] && i < n - 1)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    int arr[7] = {1, 3, 4, 7, 5, 6, 2};
    wavesort(arr, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}