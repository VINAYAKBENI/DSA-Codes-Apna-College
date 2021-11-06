#include <bits/stdc++.h>
#define e cout<<endl;

using namespace std;
// Asked in Google , Amazon , Facebook , VISA
int main(){

#ifndef ONLINE_JUDGE
freopen("inputvs.in", "r", stdin);
freopen("outputvs.in", "w", stdout);
#endif

    //Two Pointer
    int n,s;
    cin>>n>>s;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0,j=0,st=-1,en=-1,sum=0;
    while(j<n && sum+a[j]<=s){
        sum+=a[j];
        j++; 
    }
    if(sum==s){
        cout<<i+1<<" "<<j; 
        return 0; 
    }
    while(j<n){
        sum+=a[j];
        while(sum>s){
            sum-=a[i];
            i++;
        }
        if(sum==s){
            st=i+1;
            en=j+1;
            break;
        }
    }

    cout<<st<<" "<<en;
    return 0;
}