#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Minimum Subsequence With Sum K
int Minimum_Subsequence_With_Sum_k(vector<int> vec, int k)
{

    priority_queue<int, vector<int>> pq;

    for (int i = 0; i < vec.size(); i++)
    {
        pq.push(vec[i]);
    }

    int sum = 0, count = 0;
    while (!pq.empty())
    {
        sum += pq.top();
        pq.pop();
        count++;

        if (sum >= k)
        {
            return count;
        }
    }
    return -1;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << Minimum_Subsequence_With_Sum_k(a, k);

    return 0;
}