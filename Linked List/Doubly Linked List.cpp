#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Doubly Linked List Class
class node
{
public:
    int data;
    node *prev;
    node *next;
    node() {}
    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

// Insertion at last in doubly Linked List
void insert_at_last(node *&head, int val)
{
    if (head == NULL)
    {
        head = new node(val);
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    node *n = new node(val);
    temp->next = n;
    n->prev = temp;
}

// Insertion at head in doubly Linked list
void insert_at_head(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head->prev = n;
    head = n;
}

// Printing Values in Doubly Linked List
void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// Deletion in Doubly Linked List
void delete_double_ll(node *&head, int val)
{
    if (head->data == val)
    {
        node *temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
        return;
    }
    node *temp = head;
    while (temp->data != val && temp != NULL)
    {
        temp = temp->next;
    }
    temp->prev->next = temp->next;
    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }
    delete temp;
}

// Deletion at head in Doubly Linked List
void delete_at_head(node *&head)
{
    node *temp = head;
    head = head->next;
    head->prev = NULL;
    delete temp;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    node *head = NULL;
    insert_at_last(head, 2);
    insert_at_head(head, 1);
    insert_at_last(head, 3);
    insert_at_last(head, 4);
    insert_at_last(head, 5);
    insert_at_last(head, 6);

    display(head);
    delete_double_ll(head, 6);
    display(head);
    delete_at_head(head);
    display(head);

    return 0;
}