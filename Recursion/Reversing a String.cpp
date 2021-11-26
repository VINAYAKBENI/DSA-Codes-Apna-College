#include <bits/stdc++.h>
#define e cout<<endl;

using namespace std;
 
//Reversing a String
void reverse(string a){
    if(a.length()==0) return ;
    
    reverse(a.substr(1));
    cout<<a[0];
}
int main(){

#ifndef ONLINE_JUDGE
freopen("inputvs.in", "r", stdin);
freopen("outputvs.in", "w", stdout);
#endif

    string a;
    cin>>a;
    reverse(a);
    return 0;
}