#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;
//ispowerof2 function - checks wheter a no. is power of 2 (using n and n-1 trick)
int ispowerof2(int n)
{
    return n>0 && !(n & n - 1);
}
//ispowerof2 function - checks wheter a no. is power of 2 (using 2^30 trick)
int ispowerof2_math(int n)
{   
    int a=pow(2,30);
    return n>0 && (a%n==0);
}
//ispowerof2 function - checks wheter a no. is power of 2 (using n/2 iterative)
int ispowerof2_iter(int n)
{
    if(n<=0) return 0;
    while(n%2==0)n/=2;
    return (n==1);
}

//ispowerof2 function - checks wheter a no. is power of 2 (using n/2 recursive)
int ispowerof2_rec(int n)
{
    if(n<=0) return 0;
    return  (n==1 || n%2==0 && ispowerof2_rec(n/2));
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    cout << ispowerof2_math(8) << endl;
    cout << ispowerof2(0)<<endl;
    cout<<ispowerof2_iter(32)<<endl;
    cout<<ispowerof2_rec(14);
    return 0;
}