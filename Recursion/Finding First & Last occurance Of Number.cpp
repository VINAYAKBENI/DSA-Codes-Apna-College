#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

//Finding First occurance Of a Number
int First_occur(int arr[], int n, int i, int val)
{
    //Base Case
    if (i == n)
        return -1;
    if (arr[i] == val)
    {
        return i;
    }
    return First_occur(arr, n, i + 1, val);
}
//Finding Last occurance Of a Number
int Last_occur(int arr[], int n, int i, int val)
{
    //Base Case
    if (i == n)
        return -1;
    int rest = Last_occur(arr, n, i + 1, val);
    if (rest != -1)
    {
        return rest;
    }
    if (arr[i] == val)
    {
        return i;
    }
    return -1;
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    int ar[6] = {1, 12, 3, 2, 12, 5};
    cout << First_occur(ar, 6, 0, 2);
    cout << Last_occur(ar, 6, 0, 12);

    return 0;
}