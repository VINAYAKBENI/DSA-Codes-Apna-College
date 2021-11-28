#include <bits/stdc++.h>
#define e cout<<endl;

using namespace std;

//Printing all Permutations of a String
void permu(string a, string ans){
    if(a.size()==0){
        cout<<ans<<endl;
        return;
    }

    for(int i=0;i<a.length();i++){
        char ch=a[i];
        string ros=a.substr(0,i)+a.substr(i+1);
        permu(ros,ans+ch);
    }
}
int main(){

#ifndef ONLINE_JUDGE
freopen("inputvs.in", "r", stdin);
freopen("outputvs.in", "w", stdout);
#endif

    permu("abc","");
    
    return 0;
}