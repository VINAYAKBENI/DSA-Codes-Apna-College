#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

//Getbit function - Checks wheter what bit is present at the i-th index
int getbit(int a, int i)
{
    return ((1 << i) & a) != 0;
}
//Setbit function - Places a bit(1) at the i-th index
int setbit(int a, int i)
{
    return (a | (1 << i));
}
// Clearbit function  - Sets the i-th index bit as 0
int clearbit(int a, int i)
{
    return (a & (~(1 << i)));
}
//Updatebit function - Updates the value at the i-th index
int updatebit(int a, int i, int v)
{
    //clear bit operation
    int mask = ~(1 << i);
    a = a & mask;
    //set bit operation
    return (a | (v << i));
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    int a, index, v;
    cin >> a >> index >> v;
    cout << getbit(a, index) << endl;
    cout << setbit(a, index) << endl;
    cout << clearbit(a, index) << endl;
    cout << updatebit(a, index, v);
    return 0;
}