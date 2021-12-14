#include <bits/stdc++.h>
#define e cout << endl;
#define n 100

using namespace std;

// Class of Queue
class Queue
{
    int *arr;
    int front;
    int back;

public:
    Queue()
    {
        front = -1;
        back = -1;
        arr = new int[n];
    }

    // Push Function
    void push(int x)
    {

        if (back == n - 1)
        {
            cout << "Queue Overflow " << endl;
            return;
        }
        back++;
        arr[back] = x;

        if (front == -1)
        {
            front++;
        }
    }

    // Pop Function
    void pop()
    {
        if (front == -1 || front > back)
        {
            cout << "Queue is Empty " << endl;
            return;
        }

        front++;
    }

    // Peek Function
    int peek()
    {
        if (front == -1 || front > back)
        {
            cout << "Queue is Empty " << endl;
            return -1;
        }

        return arr[front];
    }

    // Empty Function
    bool empty()
    {
        if (front == -1 || front > back)
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