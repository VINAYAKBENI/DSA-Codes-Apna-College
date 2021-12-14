#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Stach Using Queue
// Apporach 1 (Making Push() Function Costly)
class Stack1
{
    int N;
    queue<int> q1;
    queue<int> q2;

public:
    Stack1()
    {
        N = 0;
    }

    void push(int val)
    {
        q2.push(val);
        N++;
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }

        // swapping Queues
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }

    void pop()
    {
        q1.pop();
        N--;
    }

    int top()
    {
        return q1.front();
    }

    int size()
    {
        return N;
    }
};

// Apporach 2
class Stack2
{
    int n;
    queue<int> q1;
    queue<int> q2;

public:
    Stack2()
    {
        n = 0;
    }

    void push(int val)
    {
        q1.push(val);
        n++;
    }

    void pop()
    {
        if (q1.empty())
        {
            cout << "Stack Is Empty" << endl;
            return;
        }
        while (q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        n--;

        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }

    int top()
    {
        if (q1.empty())
        {
            cout << "Stack Is Empty" << endl;
            return -1;
        }
        while (q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int ans = q1.front();
        q2.push(ans);

        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;

        return ans;
    }

    int size()
    {
        return n;
    }
};

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    Stack2 st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;

    return 0;
}