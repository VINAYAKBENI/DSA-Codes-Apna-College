#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// IsSafe function - To check wethwer the path is safe or not
bool isSafe(int **arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}

// RatinMaze function - To find the path to reach the destination
bool RatinMaze(int **arr, int x, int y, int n, int **solarr)
{
    // base case
    if (x == n - 1 && y == n - 1)
    {
        solarr[x][y] = 1;
        return true;
    }

    if (isSafe(arr, x, y, n))
    {
        solarr[x][y] = 1;
        if (RatinMaze(arr, x + 1, y, n, solarr))
        {
            return true;
        }
        if (RatinMaze(arr, x, y + 1, n, solarr))
        {
            return true;
        }
        solarr[x][y] = 0; // backtracking
        return false;
    }
    return false;
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    int n;
    cin >> n;
    // dynamic allocation of 2-d array
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    // solution array
    int **solarr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        solarr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            solarr[i][j] = 0;
        }
    }

    if (RatinMaze(arr, 0, 0, n, solarr))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << solarr[i][j] << " ";
            }
            e
        }
    }

    // input
    //  5
    //  1 0 1 0 1
    //  1 1 1 1 1
    //  0 1 0 1 0
    //  1 0 0 1 1
    //  1 1 1 0 1

    return 0;
}