#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

//Printing all Substring
void substring(string a, string ans)
{
    if (a.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char s = a[0];
    substring(a.substr(1), ans);
    substring(a.substr(1), ans + s);
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    substring("abc", "");
    return 0;
}