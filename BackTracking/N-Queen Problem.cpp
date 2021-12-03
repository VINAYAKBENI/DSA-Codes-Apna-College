#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// N-Queen Problem
// IsSafe Function To Check the place is safe for placement of a Queen
bool isSafe(int **arr, int x, int y, int n)
{
    // column wise checking
    for (int row = 0; row < x; row++)
    {
        if (arr[row][y] == 1)
        {
            return false;
        }
    }
    int row = x;
    int col = y;
    // above left digonal checking
    while (row >= 0 && col >= 0)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col--;
    }

    row = x;
    col = y;
    // above right digonal checking
    while (row >= 0 && col < n)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col++;
    }
    return true;
}

bool Nqueen(int **arr, int x, int n)
{
    // base case
    if (x >= n)
    {
        return true;
    }
    // row wise traversal
    for (int col = 0; col < n; col++)
    {
        if (isSafe(arr, x, col, n))
        {
            arr[x][col] = 1;

            if (Nqueen(arr, x + 1, n))
            {
                return true;
            }
            arr[x][col] = 0; // backtracking
        }
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
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }

    if (Nqueen(arr, 0, n))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            e
        }
    }

    return 0;
}