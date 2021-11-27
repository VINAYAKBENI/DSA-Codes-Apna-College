#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;
int power(int a, int b)
{
   if(a==0) return 0;
   if(b==0) return 1;
   if(b%2==0){
       return power(a,b/2)*power(a,b/2);
   }
   else{
       return power(a,b/2)*power(a,b/2)*a;
   }
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    cout<<power(2,4);

    return 0;
}