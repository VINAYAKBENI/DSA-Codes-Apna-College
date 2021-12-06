#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Linked List
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

// Insertion at last
void insert_at_tail(node *&head, int val)
{
    if (head == NULL)
    {
        node *n = new node(val);
        head = n;
        return;
    }
    node *n = new node(val);
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

// Insertion at head
void insert_at_head(node *&head, int val)
{

    node *n = new node(val);
    n->next = head;
    head = n;
}

// Printing Linked List
void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// Searching in Linked list
bool search_ll(node *head, int key)
{
    node *temp = head;
    while (temp->data != key)
    {
        if (temp->next == NULL)
        {
            return 0;
        }
        temp = temp->next;
    }

    return 1;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    node *head = NULL;
    insert_at_tail(head, 1);
    insert_at_tail(head, 2);
    insert_at_tail(head, 3);
    insert_at_head(head, 0);
    display(head);
    cout << search_ll(head, 12);
    return 0;
}