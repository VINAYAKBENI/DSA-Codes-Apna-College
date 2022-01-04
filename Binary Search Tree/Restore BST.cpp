#include <bits/stdc++.h>
#define e cout << endl;
using namespace std;

// Binary Tree Class
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Swap Function
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Calculate Pointers
void calculate_pointer(node *root, node **first, node **mid, node **last, node **prev)
{
    if (root == NULL)
    {
        return;
    }

    calculate_pointer(root->left, first, mid, last, prev);

    if ((*prev) && root->data < (*prev)->data)
    {
        if (!*first)
        {
            *first = *prev;
            *mid = root;
        }
        else
        {
            *last = root;
        }
    }
    *prev = root;
    calculate_pointer(root->right, first, mid, last, prev);
}

// Restore BST
void restore_BST(node *root)
{
    if (root == NULL)
    {
        return;
    }

    node *first, *mid, *last, *prev;
    first = NULL;
    mid = NULL;
    last = NULL;
    prev = NULL;

    // Function To Calculate Values
    calculate_pointer(root, &first, &mid, &last, &prev);

    // case 1
    if (first && last)
    {
        swap(&(first->data), &(last->data));
    }
    else if (first && mid)
    {
        swap(&(first->data), &(mid->data));
    }
}

// Inorder Traversal
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    /*
           6
         /  \
        3    9
      /  \    \
    1     4    13

            TO

           6
         /  \
        9    3
      /  \    \
    1     4    13

    */

    node *root = new node(6);
    root->left = new node(9);
    root->right = new node(3);
    root->left->left = new node(1);
    root->left->right = new node(4);
    root->right->right = new node(13);

    inorder(root);
    e
    restore_BST(root);
    inorder(root);
    e
    /*
           5
         /  \
        3    6
      /  \
    2     4

        TO

           5
         /  \
        3    6
      /  \
    4     2

    */

    node *root1 = new node(5);
    root1->left = new node(3);
    root1->right = new node(6);
    root1->left->left = new node(4);
    root1->left->right = new node(2);

    inorder(root1);
    e
    restore_BST(root1);
    inorder(root1);

    return 0;
}