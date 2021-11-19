#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;
//Finding 2 Unique element present in array - Brute Force(Without Bit Manipulation)
void Uniqueelement3(int arr[], int n)
{
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1] && arr[i + 1] == arr[i + 2])
        {
            i++;
            i++;
        }
        else
        {
            cout << arr[i];
            break;
        }
    }
}
//Find the Unique element present in array (Using Bit Manipulation)
bool checkbit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

int setbit(int n, int pos)
{
    return (n | (1 << pos));
}

int unique_element_bit3(int arr[], int n)
{
    int result = 0;
    for (int i = 0; i < 64; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (checkbit(arr[j], i))
                sum++;
        }
        if (sum % 3 != 0)
        {
            result = setbit(result, i);
        }
    }
    return result;
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    int a[10] = {1, 3, 2, 2, 1, 3, 1, 2, 3, 4};
    Uniqueelement3(a, 10);
    cout << unique_element_bit3(a, 10);
    return 0;
}