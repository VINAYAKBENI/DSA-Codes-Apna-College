#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Function To Check Possibilty
bool is_Possible(int arr[], int n, int m, int min)
{
    int Student_required = 1, sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > min)
        {
            return false;
        }
        if (sum + arr[i] > min)
        {
            Student_required++;
            sum = arr[i];

            if (Student_required > m)
            {
                return false;
            }
        }
        else
        {
            sum += arr[i];
        }
    }
    return true;
}

// Allocate Minimum Pages
int Allocate_Minimum_Pages(int arr[], int n, int m)
{
    int sum = 0;
    if (n < m)
    {
        return -1;
    }

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int start = 0, end = sum, ans = INT_MAX;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (is_Possible(arr, n, m, mid))
        {
            ans = min(ans, mid);
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
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

    int arr[] = {12, 34, 67, 90};
    int n = 4, m = 2;

    cout << "The Minimum No. of Pages : " << Allocate_Minimum_Pages(arr, n, m);

    return 0;
}