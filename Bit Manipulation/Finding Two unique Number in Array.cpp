#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;
//Finding 2 Unique element present in array - Brute Force(Without Bit Manipulation)
void Uniqueelement2(int arr[], int n)
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
            cout << arr[i] << endl;
        }
    }
}
//Find the Unique element present in array (Using Bit Manipulation)
int checkbit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

void unique_element_bit2(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    int a = 1, index = xorsum, pos = -1;
    while (a > 0)
    {
        pos++;
        if (checkbit(n, pos))
            a = 0;
    }
    int newxor = 0;
    for (int i = 0; i < n; i++)
    {
        if (checkbit(arr[i], pos))
        {
            newxor = newxor ^ arr[i];
        }
    }
    cout << newxor << endl;
    cout << (xorsum ^ newxor) << endl;
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    int a[6] = {1, 3, 2, 12, 1, 3};
    Uniqueelement2(a, 6);
    unique_element_bit2(a, 6);
    return 0;
}