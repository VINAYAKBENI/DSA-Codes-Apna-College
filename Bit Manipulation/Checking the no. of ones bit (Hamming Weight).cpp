#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;
// Brute force Apporach - Counting the no. of 1 by repeated division
int numberofone_iter(int a)
{
    int c = 0;
    while (a > 0)
    {
        if (a == 1)
        {
            c++;
            return c;
        }
        else if (a % 2 == 1)
            c++;
        a /= 2;
    }
    return c;
}
// Using Inbuilt Fuction to count no. of Set values
int numberofone_inbuilt(int a)
{
    return __builtin_popcount(a);
}
//Using N and N-1 trick
int numberofones(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    cout << numberofones(19);
    cout << numberofone_inbuilt(18);
    cout << numberofone_iter(16);
    return 0;
}