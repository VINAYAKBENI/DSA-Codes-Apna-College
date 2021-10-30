#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;
// Function To Perform Selection Sort In Array
void selectionsort(int a[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (a[j] < a[i])
            {
                int temp = a[i];
                a[i]=a[j];
                a[j]=temp;

            }
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
    selectionsort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}