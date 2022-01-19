#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    unordered_map<int, int> um;
    pair<int, int> p(5, 1);
    pair<int, int> p2(6, 2);
    pair<int, int> p3(7, 3);
    pair<int, int> p4(8, 5);

    // Insert
    um.insert(p);
    um.insert(p2);
    um.insert(p3);
    um.insert(p4);
    um[9] = 8;

    // Search
    cout << um[5] << " " << um[9] << " " << endl;

    cout << um.at(6) << endl;

    cout << um.size() << endl;

    um.erase(9);

    cout << um.size() << endl;

    return 0;
}