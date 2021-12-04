#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;
bool mycompare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    // Reducing A array elements and setting no. from 0 to n-1
    int arr[] = {10, 16, 7, 14, 5, 3, 12, 9};
    vector<pair<int, int>> vec;
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        vec.push_back(make_pair(arr[i], i));
    }

    sort(vec.begin(), vec.end(), mycompare);

    for (int i = 0; i < vec.size(); i++)
    {
        arr[vec[i].second] = i;
    }

    for (int i = 0; i < vec.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}