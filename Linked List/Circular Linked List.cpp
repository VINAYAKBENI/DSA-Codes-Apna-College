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

// Insertion at Last in Circular Linked List
void insert_at_last(node *&head, int val)
{
    if (head == NULL)
    {
        node *n = new node(val);
        n->next = n;
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    node *n = new node(val);
    temp->next = n;
    n->next = head;
}

// Insertion at head in Circular linked List
void insert_at_head(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }
    n->next = head;
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    head = n;
}

// Printing a Circular Linked List
void display(node *&head)
{
    node *temp = head;
    do
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << temp->data << " ...." << endl;
}

// Deleting a node at a position
void delete_at_pos(node *&head, int pos)
{

    if (pos == 1)
    {
        node *todelete = head;
        node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        head = head->next;
        temp->next = head;
        delete todelete;
        return;
    }

    node *temp = head;
    int count = 1;
    while (count != pos - 1)
    {
        temp = temp->next;
        count++;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    node *head = NULL;

    insert_at_last(head, 2);
    insert_at_last(head, 3);
    insert_at_last(head, 4);
    display(head);

    insert_at_head(head, 1);
    display(head);

    delete_at_pos(head, 1);
    display(head);

    return 0;
}