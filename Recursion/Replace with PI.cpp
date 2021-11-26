#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

//Replace PI with 3.14
void replace_pi(string a)
{
    if (a.length() == 0)
        return;
    if (a[0] == 'p' && a[1] == 'i')
    {
        cout << "3.14";
        replace_pi(a.substr(2));
    }
    else
    {
        cout << a[0];
        replace_pi(a.substr(1));
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
    replace_pi(a);
    return 0;
}