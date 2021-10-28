#include <bits/stdc++.h>
#define e cout<<endl;

using namespace std;
 
int main(){

#ifndef ONLINE_JUDGE
freopen("inputvs.in", "r", stdin);
freopen("outputvs.in", "w", stdout);
#endif

    int n;
    cin>>n;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=n;j++){
            if((i+j)%4==0){
                cout<<" * ";
            }
            else if(i==2 && j%4==0){
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }
        }
        e
    }
    return 0;
}