#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Count Sort
void countsort(int arr[], int n)
{
    // Finding Size Of count array
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    // Creating Count array
    int count[max + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    // Modifying count array
    for (int i = 1; i <= max; i++)
    {
        count[i] += count[i - 1];
    }
    // Answer Array
    int ans[n];

    for (int i = n - 1; i >= 0; i--)
    {
        ans[--count[arr[i]]] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = ans[i];
    }
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    int a[9] = {1, 3, 2, 3, 4, 1, 6, 4, 3};
    countsort(a, 9);
    for (int i = 0; i < 9; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}