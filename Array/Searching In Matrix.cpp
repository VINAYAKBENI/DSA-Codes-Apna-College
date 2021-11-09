#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif
    int n,m,target;
    cin>>n>>m>>target;
    //Matrix 1
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    //Search in a Matrix
   int r=0,c=m-1;
   int flag=0;
   while(r<n && c>=0){
       if(a[r][c]==target) {
           flag=1;
           break;
       }
       else if(a[r][c]>target) c--;
       else r++;
   }
   if(flag==1) cout<<"Element Found";
   else cout<<"Element Missing";
    return 0;
}