#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

//0-1 Knapsack Problem
int knapsack(int val[], int wt[], int n, int W)
{
    if (n == 0 || W == 0)
        return 0;

    if (wt[n - 1] > W)
        return knapsack(val, wt, n - 1, W);

    return max(knapsack(val, wt, n - 1, W), knapsack(val, wt, n - 1, W - wt[n - 1]) + val[n - 1]);
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    int val[] = {100, 50, 150};
    int wt[] = {10, 20, 30};
    cout << knapsack(val, wt, 3, 50);

    return 0;
}