#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// CLass Of Queue using Stack
// Apporach 1 (Using 2 Stack)
class Queue1
{
    stack<int> st1;
    stack<int> st2;

public:
    void push(int x)
    {
        st1.push(x);
    }

    int pop()
    {

        if (st1.empty() && st2.empty())
        {
            cout << "Queue is empty " << endl;
            return -1;
        }

        if (st2.empty())
        {
            while (!st1.empty())
            {
                int a = st1.top();
                st1.pop();
                st2.push(a);
            }
        }

        int val = st2.top();
        st2.pop();
        return val;
    }

    bool empty()
    {
        if (st1.empty() && st2.empty())
        {
            cout << "Queue is empty " << endl;
            return 1;
        }
        return 0;
    }
};

// Apporach 2 (Using A Stack And Call Stack)
class Queue2
{

    stack<int> st;

public:
    void push(int x)
    {
        st.push(x);
    }

    int pop()
    {
        if (st.empty())
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }

        int topele = st.top();
        st.pop();
        if (st.empty())
        {
            return topele;
        }
        // Call Stack
        int ans = pop();
        st.push(topele);

        return ans;
    }

    bool empty()
    {
        if (st.empty())
        {
            cout << "Queue is empty " << endl;
            return 1;
        }
        return 0;
    }
};

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    /*Queue1 q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    */

    Queue2 q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;

    return 0;
}