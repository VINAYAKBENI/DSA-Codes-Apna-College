#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Reversal of A Sentence Using Stack
void reversesentence(string a)
{

    stack<string> st;
    for (int i = 0; i < a.size(); i++)
    {
        string word = "";
        while (a[i] != ' ' && i < a.size())
        {
            word += a[i];
            i++;
        }
        st.push(word);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    e
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    string a = "hey, how are you doing?";
    reversesentence(a);

    return 0;
}