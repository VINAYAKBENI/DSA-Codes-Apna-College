#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;
void maxtilli(int arr[], int n)
{
    int mx = INT_MIN;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > mx)
        {
            mx = arr[i];
        }
        cout << mx << " ";
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
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    /*cout<<binarysearch(arr,9,5)<<endl;
    reversearray(arr,6);
    cout<<arr[0];
    */
    maxtilli(arr, n);
    /*for(int i=0;i<6;i++){
       cout<<arr[i]<< " ";
   }*/
    return 0;
}