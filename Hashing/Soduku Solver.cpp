#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Helper Function to Check Combinations
void Helper(int r, int c, vector<vector<char>> &a, map<pair<int, int>, map<int, int>> &mp, vector<map<int, int>> &row, vector<map<int, int>> &col)
{
    if (r == 9)
    {
        int r = 0;
        for (auto it : a)
        {

            int c = 0;
            for (auto i : it)
            {
                c++;
                cout << i << " ";
                if (c % 3 == 0)
                {
                    cout << " | ";
                }
            }
            cout << endl;
            r++;
            if (r % 3 == 0)
            {
                cout << "-------------------------- " << endl;
            }
        }
        cout << endl;
        return;
    }

    if (c == 9)
    {
        Helper(r + 1, 0, a, mp, row, col);
        return;
    }
    if (a[r][c] != '.')
    {
        Helper(r, c + 1, a, mp, row, col);
        return;
    }

    for (int i = 1; i <= 9; i++)
    {
        int rw = r / 3;
        int cl = c / 3;

        if (!mp[{rw, cl}][i] && !row[r][i] && !col[c][i])
        {
            mp[{rw, cl}][i] = 1;
            row[r][i] = 1;
            col[c][i] = 1;
            a[r][c] = i + '0';

            Helper(r, c + 1, a, mp, row, col);

            mp[{rw, cl}][i] = 0;
            row[r][i] = 0;
            col[c][i] = 0;
            a[r][c] = '.';
        }
    }
}

// Sudoku Solver
void Solve_Soduku(vector<vector<char>> &a)
{
    map<pair<int, int>, map<int, int>> mp;
    vector<map<int, int>> row(9);
    vector<map<int, int>> col(9);

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (a[i][j] != '.')
            {
                mp[make_pair(i / 3, j / 3)][a[i][j] - '0'] = 1;
                row[i][a[i][j] - '0'] = 1;
                col[j][a[i][j] - '0'] = 1;
            }
        }
    }
    Helper(0, 0, a, mp, row, col);
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    vector<vector<char>> soduku = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'},

    };

    Solve_Soduku(soduku);

    return 0;
}