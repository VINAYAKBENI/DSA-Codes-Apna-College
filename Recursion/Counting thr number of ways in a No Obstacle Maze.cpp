#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

//Counting thr number of ways in a No Obstacle Maze
int countpath_maze(int n, int i, int j)
{
    if (i == n - 1 && j == n - 1)
    {
        return 1;
    }
    if (i > n - 1 || j > n - 1)
    {
        return 0;
    }

    return countpath_maze(n, i + 1, j) + countpath_maze(n, i, j + 1);
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    cout << countpath_maze(3, 0, 0);

    return 0;
}