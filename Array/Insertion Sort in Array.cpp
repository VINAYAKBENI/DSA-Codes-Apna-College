#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;
// Function To Perform Insertion Sort In Array
void insertionsort(int a[], int n)
{
    for(int i=1;i<n;i++){
        int current=a[i];
        int j=i-1;
        while(a[j]>current && j>-1){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current;
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
    insertionsort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}

