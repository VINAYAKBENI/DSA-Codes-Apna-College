#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    //Matrix 1
    int a[n1][n2];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cin>>a[i][j];
        }
    }
    //Matrix 2
    int b[n2][n3];
    for(int i=0;i<n2;i++){
        for(int j=0;j<n3;j++){
            cin>>b[i][j];
        }
    }
    //Answer Matrix
    int ans[n1][n2];
     for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            ans[i][j]=0;
        }
    }

    //Multipication of a Matrix
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            for(int k=0;k<n2;k++){
                ans[i][j]+=a[i][k]*b[k][j];
            }   
        }
    }
     for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            cout<<ans[i][j]<<" ";
        }
        e
    }
    return 0;
}