#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

//Counting thr number of ways in a No Obstacle Maze
int tiling_ways(int n)
{
    if (n < 2)
    {
        return n;
    }
    return tiling_ways(n - 1) + tiling_ways(n - 2);
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    cout << tiling_ways(4);

    return 0;
}