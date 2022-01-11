#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Function To Check Pallindrome
bool Is_Pallindrome(int n)
{
    int temp = n, number = 0;
    while (temp > 0)
    {
        number = number * 10 + temp % 10;
        temp /= 10;
    }
    if (number == n)
    {
        return true;
    }
    return false;
}

// SubArray Of Size K With Pallindromic Concatenation
int Subarrray_With_Pallindromic_Concatenation(vector<int> arr, int k)
{
    int num = 0;
    for (int i = 0; i < k; i++)
    {
        num = num * 10 + arr[i];
    }

    if (Is_Pallindrome(num))
    {
        return 0;
    }

    for (int j = k; j < arr.size(); j++)
    {
        num = (num % (int)pow(10, k - 1)) * 10 + arr[j];

        if (Is_Pallindrome(num))
        {
            return j - k + 1;
        }
    }
    return -1;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    vector<int> arr = {2, 3, 5, 1, 1, 5};

    int ans = Subarrray_With_Pallindromic_Concatenation(arr, 4);

    if (ans == -1)
    {
        cout << "Pallindromic Subarray Does Not Exists";
    }
    else
    {
        for (int i = ans; i < ans + 4; i++)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}