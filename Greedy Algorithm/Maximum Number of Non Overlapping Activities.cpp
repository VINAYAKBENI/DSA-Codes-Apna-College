#include <bits/stdc++.h>
#define e cout<<endl;

using namespace std;
 
// Maximum No. of Non Overlapping Activities
int Maximum_No_Of_Activities(vector<vector<int>> &v,int n){
    
    sort(v.begin(),v.end(),[&](vector<int> &a,vector<int> &b){
        return a[1]<b[1];
    });

    int ans=1;
    int end=v[0][1];

    for(int i=1;i<n;i++){
        if(v[i][0]>=end){
            ans++;
            end=v[i][1];
        }
    }

    return ans;

}

int main(){

#ifndef ONLINE_JUDGE
freopen("inputvs.in", "r", stdin);
freopen("outputvs.in", "w", stdout);
#endif

    int n;
    cin>>n;

    vector<vector<int>> v;

    for(int i=0;i<n;i++){
        int start,end;
        cin>>start>>end;
        v.push_back({start,end});
    }

    cout<<Maximum_No_Of_Activities(v,n);

    

    return 0;
}