#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Linked List Class
class node
{
public:
    int data;
    node *next;

    node()
    {
        next = NULL;
    }

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

// Printing Linked List
void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

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

// Reversing K Nodes of Linked List (Iterative)
node *reversek(node *&head, int k)
{
    node *prev = NULL;
    node *curr = head;
    node *next_ele;
    int count = 0;

    while (curr != NULL && count < k)
    {
        next_ele = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next_ele;
        count++;
    }
    if (curr != NULL)
    {
        head->next = reversek(curr, k);
    }

    return prev;
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
    insert_at_tail(head, 4);
    insert_at_tail(head, 5);
    insert_at_tail(head, 6);

    print(head);
    head = reversek(head, 2);
    print(head);
    return 0;
}