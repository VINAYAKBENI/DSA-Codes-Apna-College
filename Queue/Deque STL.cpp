#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    // Deque STL
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(3);
    dq.push_front(4);

    for (int i = 0; i < dq.size(); i++)
    {
        cout << dq[i] << " ";
    }
    e
    dq.pop_back();
    dq.pop_front();
    for (int i = 0; i < dq.size(); i++)
    {
        cout << dq[i] << " ";
    }

    return 0;
}