#include <bits/stdc++.h>
#define e cout<<endl;

using namespace std;
//Checking Wether Array is Sorted Or Not
bool sort_array(int arr[],int n){
    if(n==1){
        return 1;
    }
    return arr[0]<arr[1] && sort_array(arr+1,n-1);
}
 
int main(){

#ifndef ONLINE_JUDGE
freopen("inputvs.in", "r", stdin);
freopen("outputvs.in", "w", stdout);
#endif

    int a[6]={1,2,3,4,52,6};
    cout<<sort_array(a,6);
    return 0;
}