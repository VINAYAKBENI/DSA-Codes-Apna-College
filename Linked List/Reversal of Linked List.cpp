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

// Reversal in Linked List (Iterative)
void rever(node *&head)
{
    if (head == NULL || head->next == NULL)
        return;

    node *prev = NULL;
    node *curr = head;
    node *next_ele = head->next;
    while (next_ele != NULL)
    {
        curr->next = prev;
        prev = curr;
        curr = next_ele;
        next_ele = next_ele->next;
    }
    curr->next = prev;
    head = curr;
}

// Reversal in Linked List (Recursive)
node* rever_rec(node *&head)
{
    //Base case
    if (head == NULL || head->next == NULL)
        return head;

    node* newhead=rever_rec(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
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
    rever(head);
    print(head);
    node* h=rever_rec(head);
    print(h);

    return 0;
}