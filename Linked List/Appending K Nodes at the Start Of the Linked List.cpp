#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Linked List Class
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

// Inserton at Last in Linked List
void insert_at_last(node *&head, int val)
{
    if (head == NULL)
    {
        node *n = new node(val);
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    node *n = new node(val);
    temp->next = n;
}

// Printing Values of Linked List
void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// Length of a Linked List
int lenghth_ll(node *head)
{
    int c = 0;
    while (head != NULL)
    {
        head = head->next;
        c++;
    }
    return c;
}

// Appending K Nodes at the Start Of the Linked List
void append_k_nodes(node *&head, int k)
{
    node *newhead;
    node *newtail;
    node *tail = head;

    int l = lenghth_ll(head);
    k = k % l;
    int count = 1;
    while (tail->next != NULL)
    {
        if ((l - k) == count)
        {
            newtail = tail;
        }
        if ((l - k + 1) == count)
        {
            newhead = tail;
        }
        tail = tail->next;
        count++;
    }
    newtail->next = NULL;
    tail->next = head;
    head = newhead;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    node *head = NULL;
    insert_at_last(head, 1);
    insert_at_last(head, 2);
    insert_at_last(head, 3);
    insert_at_last(head, 4);
    insert_at_last(head, 5);
    insert_at_last(head, 6);

    display(head);
    append_k_nodes(head, 2);
    display(head);

    return 0;
}