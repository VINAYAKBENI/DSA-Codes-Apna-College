#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Insertion at Bottom Of Stack
void insert_at_bottom(stack<int> &st, int ele)
{
    if (st.empty())
    {
        st.push(ele);
        return;
    }
    int topele = st.top();
    st.pop();
    insert_at_bottom(st, ele);
    st.push(topele);
}

// Reversal of A Stack Using Recursion
void reversestack(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }

    int top = st.top();
    st.pop();
    reversestack(st);
    insert_at_bottom(st, top);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    reversestack(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}