#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;
//Google Kickstart
int longest_arthematic_subarray(int arr[],int n){
    int pd=arr[1]-arr[0];
    int j=2;
    int curr=2,ans=2;;
    while(j<n){
        if(pd==arr[j]-arr[j-1]){
            curr++;
        }
        else{
            pd=arr[j]-arr[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
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
    cout<<longest_arthematic_subarray(arr,n);
    /*for(int i=0;i<6;i++){
       cout<<arr[i]<< " ";
   }*/
    return 0;
}