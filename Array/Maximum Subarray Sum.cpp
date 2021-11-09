#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;
//Sum of all Sum array (brute force)
void sumofsubarray(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            cout<<"sum of sub array "<<sum;
            cout<<endl;
        }
    }
}

//Sum of all Sum array (Prefix Sum)
void sumofsubarray1(int arr[],int n){
    int prefix[n];
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
         prefix[i]=arr[i]+prefix[i-1];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            
            i>0? cout<<"sum of sub array "<<prefix[j]-prefix[i-1] :  cout<<"sum of sub array "<<prefix[j]; 
            cout<<endl;
        }
    }
}
//Sum of all Sum array (Kadane's Algorithm)
void sumofsubarray2(int arr[],int n){
   int cs=0,largest=0;
   for(int i=0;i<n;i++){
       cs+=arr[i];
       if(cs<0) cs=0;
       largest=max(cs,largest);
   }
   cout<<"largest Sum is "<<largest;
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif



    return 0;
}