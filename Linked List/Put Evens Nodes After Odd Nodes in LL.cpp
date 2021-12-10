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

// Insertion at last in Linked List
void insert_at_last(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

// put evens node after odd nodes
void put_even_after_odd(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return;
    }
    node *odd = head;
    node *even = head->next;
    node *evenstart = head->next;
    while (odd->next != NULL && even->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;

        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenstart;
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
    put_even_after_odd(head);
    display(head);

    return 0;
}