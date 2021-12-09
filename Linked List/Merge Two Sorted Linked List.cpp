#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Linked List Class
class node
{
public:
    int data;
    node *next;
    node() {}
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

// Merge 2 sorted Linked List (Iterative)

node *merge_iter(node *&head1, node *&head2)
{
    node *p1 = head1;
    node *p2 = head2;
    node *newdummy = new node(-1);
    node *p3 = newdummy;

    while (p1 != NULL && p2 != NULL)
    {
        if (p1->data < p2->data)
        {
            p3->next = p1;
            p1 = p1->next;
        }
        else
        {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }

    while (p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }
    while (p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }

    return newdummy->next;
}

// Merge 2 sorted Linked List (recursive)
node *merge_recu(node *&head1, node *&head2)
{
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }
    node *result;

    if (head1->data < head2->data)
    {
        result = head1;
        result->next = merge_recu(head1->next, head2);
    }
    else
    {
        result = head2;
        result->next = merge_recu(head1, head2->next);
    }

    return result;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    node *head1 = NULL;
    insert_at_last(head1, 1);
    insert_at_last(head1, 4);
    insert_at_last(head1, 5);
    insert_at_last(head1, 7);

    display(head1);

    node *head2 = NULL;
    insert_at_last(head2, 2);
    insert_at_last(head2, 3);
    insert_at_last(head2, 6);
    display(head2);

    /*
    node *newhead = merge_iter(head1, head2);
    display(newhead);
    */
    node *newhead = merge_recu(head1, head2);
    display(newhead);

    return 0;
}