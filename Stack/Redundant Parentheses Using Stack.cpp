#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Redundant Parentheses Using Stack
bool redundant_parentheses(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (st.empty())
            {
                return 1;
            }

            if (st.top() == '(')
            {
                return 1;
            }

            while (st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/')
            {
                st.pop();
            }
            st.pop();
        }
    }
    if (st.empty())
    {
        return 0;
    }
    return 1;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    cout << redundant_parentheses("(a*(a+b))") << endl;
    cout << redundant_parentheses("(((((a-(a+b)*(a/v))") << endl;

    return 0;
}