#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

void sumofsubarray(int arr[],int n){
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            cout<<sum<<" ";
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
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    /*cout<<binarysearch(arr,9,5)<<endl;
    reversearray(arr,6);
    cout<<arr[0];
    */
    sumofsubarray(arr,n);
    /*for(int i=0;i<6;i++){
       cout<<arr[i]<< " ";
   }*/
    return 0;
}