#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Balanced Parenthesis
bool balanced_parenthesis(string s)
{

    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (!st.empty() && st.top() == '(')
            {
                st.pop();
            }
            else
            {
                return 0;
            }
        }
        else if (s[i] == ']')
        {
            if (!st.empty() && st.top() == '[')
            {
                st.pop();
            }
            else
            {
                return 0;
            }
        }
        else if (s[i] == '}')
        {
            if (!st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    if (st.empty())
    {
        return 1;
    }
    return 0;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    cout << balanced_parenthesis("([{}])") << endl;
    cout << balanced_parenthesis("({[()]}])") << endl;

    return 0;
}