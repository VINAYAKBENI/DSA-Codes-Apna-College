#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Function To Check Perfect Number
bool Is_Perfect_Number(int n)
{
    int sum = 1;
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i == n / i)
            {
                sum += i;
            }
            else
            {
                sum += i + n / i;
            }
        }
    }
    if (sum == n && n != 1)
    {
        return true;
    }
    return false;
}

// Maximum Sum In a Subarray(Sliding Window)
int Maximum_Sum(int arr[], int n, int k)
{
    if (n < k)
    {
        cout << "Invalid Values" << endl;
        return -1;
    }
    int ans = 0;
    for (int i = 0; i < k; i++)
    {
        ans += arr[i];
    }
    int sum = ans;
    for (int i = k; i < n; i++)
    {
        sum += arr[i] - arr[i - k];
        ans = max(sum, ans);
    }
    return ans;
}

// Maximum Perfect Numbers in SubArray Of Size K
int Maximum_Perfect_No_In_Subarray_of_K(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (Is_Perfect_Number(arr[i]))
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = 0;
        }
    }

    return Maximum_Sum(arr, n, k);
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    int arr[] = {28, 2, 3, 6, 496, 99, 8128, 24};

    cout << Maximum_Perfect_No_In_Subarray_of_K(arr, 8, 4) << endl;
    return 0;
}