#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Class of Linked List
class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

// Class Of Queue Using Linked List
class Queue
{
    node *front;
    node *back;

public:
    Queue()
    {
        front = NULL;
        back = NULL;
    }

    // Push Function
    void push(int x)
    {
        node *n = new node(x);
        if (front == NULL)
        {
            front = n;
            back = n;
            return;
        }
        back->next = n;
        back = n;
    }

    // Pop Function
    void pop()
    {
        if (front == NULL)
        {
            cout << "Queue is Empty " << endl;
            return;
        }
        node *p = front;
        front = front->next;
        delete p;
    }

    // Peek Function
    int peek()
    {
        if (front == NULL)
        {
            cout << "Queue is Empty " << endl;
            return -1;
        }
        return front->data;
    }

    // Empty Function
    bool empty()
    {
        if (front == NULL)
        {
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

    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();

    cout << q.empty() << endl;
    q.pop();

    cout << q.empty() << endl;

    return 0;
}