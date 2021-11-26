#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

//Remove all Duplicates From String
string remove_dup(string a)
{
    if (a.length() == 0)
        return "";
    char s = a[0];
    string ans = remove_dup(a.substr(1));
    if (s == ans[0])
    {
        return ans;
    }
    return s + ans;
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    cout << remove_dup("aaabbccccccdd");
    return 0;
}