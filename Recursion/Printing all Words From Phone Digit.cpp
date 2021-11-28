#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

//Printing all Words From Phone Digit
string arr[] = {"", "./", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
void keypad(string a, string ans)
{
    if (a.size() == 0)
    {
        cout << ans << endl;
        return;
    }
    char s = a[0];
    string code = arr[s - '0'];
    string ros = a.substr(1);

    for (int i = 0; i < code.length(); i++)
    {
        keypad(ros, ans + code[i]);
    }
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    keypad("23", "");
    return 0;
}