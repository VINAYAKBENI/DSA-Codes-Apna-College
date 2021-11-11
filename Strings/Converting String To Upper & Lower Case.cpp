#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

//Fuction to convert to Upper Case
string to_upper(string a)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] -= 32;
        }
    }
    return a;
}
//Fuction to convert to Lower Case
string to_lower(string a)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] += 32;
        }
    }
    return a;
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    string a = "asdfghjkl";
    // transform(a.begin(),a.end(),a.begin(),:: toupper);
    a = to_upper(a);
    cout << a;
    // transform(a.begin(),a.end(),a.begin(),:: tolower);
    cout << to_lower(a);
    return 0;
}