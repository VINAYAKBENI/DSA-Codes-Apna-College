#include <bits/stdc++.h>
#define e cout << endl;
#define n 100

using namespace std;
// Stack Implementation Using Array
class Stack
{
    int *arr;
    int top;

public:
    // Constructor to allocate size
    Stack()
    {
        top = -1;
        arr = new int[n];
    }

    // Push Function To Add Element
    void push(int a)
    {
        if (top == n - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = a;
    }

    // Pop Function To Remove Element
    void pop()
    {
        if (top == -1)
        {
            cout << "N0 More Element to be Removed" << endl;
        }
        top--;
    }

    // Top Function To Get The Top Element
    int Top()
    {
        if (top == -1)
        {
            cout << "N0 Element in Stack" << endl;
            return -1;
        }
        return arr[top];
    }

    // Empty Function To Check wheter it is empty or not
    bool empty()
    {
        return top == -1;
    }
};
int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    Stack st;
    st.push(1);
    st.push(20);
    st.push(5);
    st.push(2);
    cout << st.Top() << endl;
    st.pop();
    st.pop();
    st.pop();
    cout << st.empty() << endl;
    cout << st.Top() << endl;
    st.pop();
    cout << st.Top() << endl;
    cout << st.empty();

    return 0;
}