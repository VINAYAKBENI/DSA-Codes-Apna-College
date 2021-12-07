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
        cout << head->data << "->";
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

// Deletion in Linked List
void delete_ll(node *&head, int val)
{
    if (head == NULL)
        return;
    // Deleting head node
    if (head->data == val)
    {
        node *todelete = head;
        head = head->next;
        delete todelete;
        return;
    }

    node *temp = head;
    while (temp != NULL)
    {
        if (temp->next->data == val)
        {
            node *todelete = temp->next;
            temp->next = temp->next->next;
            delete todelete;
            return;
        }
        temp = temp->next;
    }
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
    print(head);
    delete_ll(head, 1);
    print(head);
    delete_ll(head, 4);
    print(head);

    return 0;
}