#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Maximum Subarray Sum of Size = K & Sum < X
int Maximum_Subarray_Sum(int arr[], int n, int k, int x)
{
    int sum = 0, ans = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    if (sum < x)
    {
        ans = sum;
    }
    for (int i = k; i < n; i++)
    {
        sum -= arr[i - k];
        sum += arr[i];

        if (sum < x)
        {
            ans = max(ans, sum);
        }
    }
    return ans;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    int arr[] = {7, 5, 4, 6, 8, 9};
    int n = 6;
    cout << "Maximum Subarray Sum : " << Maximum_Subarray_Sum(arr, n, 3, 20);

    return 0;
}