#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

//Counting thr number of ways to reach from one point to another
int countpath(int s, int end)
{
    if (s == end)
    {
        return 1;
    }
    if (s > end)
    {
        return 0;
    }
    int count = 0;
    for (int i = 1; i < 6; i++)
    {
        count += countpath(s + i, end);
    }
    return count;
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    cout << countpath(0, 4);

    return 0;
}