#include <bits/stdc++.h>
#define e cout<<endl;

using namespace std;
//Adding To Binary Number Given As String
int main(){

#ifndef ONLINE_JUDGE
freopen("inputvs.in", "r", stdin);
freopen("outputvs.in", "w", stdout);
#endif
    string a,b;
    cin>>a>>b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    string ans;
    int i = 0, carry = 0;
    while (i < a.size() && i < b.size())
    {
        if ((a[i]-'0') + (b[i]-'0' )+ carry < 2)
        {
            ans += to_string((a[i]-'0') + (b[i]-'0') + carry);
            carry=0;
        }
        else
        {
            ans += to_string(((a[i]-'0') +( b[i]-'0' ) + carry) % 2);
            carry = 1;
        }
        i++;
    }
    while (i < a.size())
    {
        if ((a[i]-'0') + carry < 2)
        {
            ans += to_string((a[i]-'0') + carry);
            carry=0;
        }
        else
        {
            ans += to_string(((a[i]-'0') + carry) % 2);
            carry = 1;
        }
        i++;
    }
    while (i < b.size())
    {
        if ((b[i]-'0') + carry < 2)
        {
            ans += to_string((b[i]-'0') + carry);
            carry=0;
        }
        else
        {
            ans += to_string(((b[i] -'0')+ carry) % 2);
            carry = 1;
        }
        i++;
    }
    if (carry == 1)
    {
        ans += to_string(carry);
    }
    reverse(ans.begin(), ans.end());
    cout<<ans;
    return 0;
}    