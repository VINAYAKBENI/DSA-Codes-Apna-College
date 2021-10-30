#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;
//Function To Add Two Binary No.
int addbinary(int a, int b)
{
    string ans;
    int carry = 0;
    while (a > 0 && b > 0)
    {
        int x = a % 10;
        int y = b % 10;
        ans += to_string((x + y + carry) % 2);
        if (x + y + carry < 2)
        {
            carry = 0;
        }
        else
        {
            carry = 1;
        }
        a /= 10;
        b /= 10;
    }
    while (a > 0)
    {
        int x = a % 10;
        ans += to_string((x + carry) % 2);
        if (x + carry < 2)
        {
            carry = 0;
        }
        else
        {
            carry = 1;
        }
        a /= 10;
    }
    while (b > 0)
    {
        int y = b % 10;
        ans += to_string((y + carry) % 2);
        if (y + carry < 2)
        {
            carry = 0;
        }
        else
        {
            carry = 1;
        }
        b /= 10;
    }
    if (carry == 1)
        ans += to_string(carry);
    reverse(ans.begin(), ans.end());
    return stoi(ans);
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    int a, b;
    cin >> a >> b;
    cout << addbinary(a, b);
    return 0;
}