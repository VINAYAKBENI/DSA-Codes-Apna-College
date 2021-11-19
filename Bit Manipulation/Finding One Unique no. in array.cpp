#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;
//Find the Unique element present in array - Brute Force(Without Bit Manipulation)
int Uniqueelement(int arr[], int n)
{
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            i++;
        }
        else
        {
            return arr[i];
        }
    }
    return 0;
}
//Find the Unique element present in array (Using Bit Manipulation)
int unique_element_bit(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    return xorsum;
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    int a[5] = {1, 3, 2, 2, 1};
    cout << Uniqueelement(a, 5) << endl;
    cout << unique_element_bit(a, 5);
    return 0;
}