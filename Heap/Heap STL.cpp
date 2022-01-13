#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    // Max Heap
    priority_queue<int, vector<int>> pq;
    pq.push(2);
    pq.push(3);
    pq.push(1);

    cout << "Top element is : " << pq.top() << endl;
    pq.pop();
    cout << "Top element is : " << pq.top() << endl;

    // Main Heap
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(2);
    pq1.push(3);
    pq1.push(1);

    cout << "Top element is : " << pq1.top() << endl;
    pq1.pop();
    cout << "Top element is : " << pq1.top() << endl;
    return 0;
}