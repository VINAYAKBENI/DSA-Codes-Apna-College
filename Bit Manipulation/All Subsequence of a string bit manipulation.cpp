#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;
// Printing All Subsequence of A String - Bit Manipulation
void subsequence(string a)
{
    for (int i = 0; i < (1 << a.size()); i++)
    {
        for (int j = 0; j < a.size(); j++)
        {
            if (i & (1 << j))
            {
                cout << a[j] << " ";
            }
        }
        e
    }
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif
    string a;
    cin >> a;
    subsequence(a);
    return 0;
}