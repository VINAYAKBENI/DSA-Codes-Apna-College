#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Minimum Subarray Size & Sum > X
int Minimum_Subarray_Size(int arr[], int n, int x)
{
    int sum = 0, min_lenght = n + 1, start = 0, end = 0;
    while (end < n)
    {
        while (sum <= x && end < n)
        {
            sum += arr[end++];
        }

        while (sum > x && start < n)
        {
            if (end - start < min_lenght)
            {
                min_lenght = end - start;
            }
            sum -= arr[start++];
        }
    }
    return min_lenght;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    int arr[] = {1, 4, 45, 6, 10, 19};
    int n = 6;
    int ans = Minimum_Subarray_Size(arr, n, 51);
    if (ans == (n + 1))
    {
        cout << "No Such Subarray Exists " << endl;
    }
    else
    {
        cout << "Minimum Subarray Size : " << ans;
    }
    return 0;
}