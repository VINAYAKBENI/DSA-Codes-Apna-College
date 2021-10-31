#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;
// Function To Perform Bubble Sort In Array
void bubblesort(int a[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int s = 1;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (a[s - 1] > a[s])
            {
                swap(a[s - 1], a[s]);
            }
            s++;
        }
    }
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bubblesort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}