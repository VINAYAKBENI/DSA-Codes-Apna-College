#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Global MaxHeap and MinHeap
priority_queue<int, vector<int>, greater<int>> pqmin;
priority_queue<int, vector<int>> pqmax;

// Insert Function to Insert Value
void insert(int x)
{
    if (pqmin.size() == pqmax.size())
    {
        // Both Heap Are Empty
        if (pqmax.size() == 0)
        {
            pqmax.push(x);
            return;
        }

        if (x < pqmax.top())
        {
            pqmax.push(x);
        }
        else
        {
            pqmin.push(x);
        }
    }
    else
    {
        // Case 1 : Size of MaxHeap > Size of MinHeap
        if (pqmax.size() > pqmin.size())
        {
            if (x >= pqmax.top())
            {
                pqmin.push(x);
            }
            else
            {
                int temp = pqmax.top();
                pqmax.pop();
                pqmin.push(temp);
                pqmax.push(x);
            }
        }
        // Case 2 : Size of MinHeap > Size of MaxHeap
        else
        {
            if (x <= pqmin.top())
            {
                pqmax.push(x);
            }
            else
            {
                int temp = pqmin.top();
                pqmin.pop();
                pqmax.push(temp);
                pqmin.push(x);
            }
        }
    }
}

// Find Median Function
double find_Median()
{
    if (pqmax.size() == pqmin.size())
    {
        return (pqmax.top() + pqmin.top()) / 2.0;
    }
    else if (pqmax.size() > pqmin.size())
    {
        return pqmax.top();
    }
    return pqmin.top();
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    insert(10);
    cout << find_Median() << endl;
    insert(15);
    cout << find_Median() << endl;
    insert(21);
    cout << find_Median() << endl;
    insert(30);
    cout << find_Median() << endl;
    insert(18);
    cout << find_Median() << endl;
    insert(19);
    cout << find_Median() << endl;

    return 0;
}