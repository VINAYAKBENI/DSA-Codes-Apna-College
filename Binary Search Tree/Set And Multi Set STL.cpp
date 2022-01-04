#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    // Set STL
    cout << "Set STL" << endl;
    set<int> s;
    // set<int,greater<int>> s;   Desending Order
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(5);

    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout << *i << " ";
    }
    e for (auto i = s.rbegin(); i != s.rend(); i++)
    {
        cout << *i << " ";
    }
    e
    cout<< s.size() << endl;

    cout << *s.lower_bound(2) << endl;
    cout << *s.lower_bound(4) << endl;
    cout << *s.upper_bound(1) << endl;
    cout << *s.upper_bound(4) << endl;

    s.erase(2);
    s.erase(s.begin());
    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout << *i << " ";
    }
    e

    // Multi Set STL
    cout<< "Multi Set STL" << endl;
    multiset<int> s1;
    // set<int,greater<int>> s;   Desending Order
    s1.insert(1);
    s1.insert(2);
    s1.insert(2);
    s1.insert(3);
    s1.insert(3);
    s1.insert(3);
    s1.insert(5);

    for (auto i = s1.begin(); i != s1.end(); i++)
    {
        cout << *i << " ";
    }
    e

    s1.erase(2);      // All Occurrance Got Removed
    s1.erase(s1.find(3)); // Only First Occurance

    for (auto i = s1.begin(); i != s1.end(); i++)
    {
        cout << *i << " ";
    }
    e

    // Unordered Set STL
    cout<< "Unordered set STL" << endl;
    unordered_set<int> s2;
    s2.insert(1);
    s2.insert(2);
    s2.insert(2);
    s2.insert(3);
    s2.insert(5);

    for (auto i = s2.begin(); i != s2.end(); i++)
    {
        cout << *i << " ";
    }
    e

    s2.erase(2);      // All Occurrance Got Removed
    s2.erase(s2.find(3)); // Only First Occurance

    for (auto i = s2.begin(); i != s2.end(); i++)
    {
        cout << *i << " ";
    }

    return 0;
}