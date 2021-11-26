#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

//Moving all X at last of a String
string move_last(string a)
{
    if (a.length() == 0)
        return "";
    char s = a[0];
    string ans = move_last(a.substr(1));
    if (s == 'x')
    {
        return ans + s;
    }
    return s + ans;
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    cout << move_last("abcxxdhtxgjux");
    return 0;
}