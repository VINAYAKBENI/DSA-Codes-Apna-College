#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;
//Google Kickstart
int record_breaking_day(int arr[],int n){
    int ans=0,mx=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>mx){
            mx=arr[i];
            if(arr[i]>arr[i+1]) ans++;
        }
        
    }
    return ans;
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
    cout<<record_breaking_day(arr,n);
    /*for(int i=0;i<6;i++){
       cout<<arr[i]<< " ";
   }*/
    return 0;
}