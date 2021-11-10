#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif
    int n;
    cin >> n;
    char a[n + 1];
    cin >> a;
    bool flag = 1;
    //Checking for Pallindrome of word in Char array
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[n - i - 1])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        cout << "Yes Its a Pallindrome";
    else
        cout << "No Its not a Pallindrome";
    return 0;
}