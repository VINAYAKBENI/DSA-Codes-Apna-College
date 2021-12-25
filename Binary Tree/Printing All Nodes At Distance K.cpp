#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Class of Binary Tree
class tree
{
public:
    int data;
    tree *left;
    tree *right;

    tree(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Printing Subtree Nodes
void print_subtree_nodes(tree *root, int k)
{
    if (root == NULL || k < 0)
    {
        return;
    }
    if (k == 0)
    {
        cout << root->data << " ";
        return;
    }
    print_subtree_nodes(root->left, k - 1);
    print_subtree_nodes(root->right, k - 1);
}

// Printing All Nodes At Distance K
int print_nodes_at_k(tree *root, tree *target, int k)
{
    if (root == NULL)
    {
        return -1;
    }
    if (root == target)
    {
        print_subtree_nodes(root, k);
        return 0;
    }

    int dl = print_nodes_at_k(root->left, target, k);
    if (dl != -1)
    {
        if (dl + 1 == k)
        {
            cout << root->data << " ";
        }
        else
        {
            print_subtree_nodes(root->right, k - dl - 2);
        }
        return dl + 1;
    }

    int dr = print_nodes_at_k(root->right, target, k);
    if (dr != -1)
    {
        if (dr + 1 == k)
        {
            cout << root->data << " ";
        }
        else
        {
            print_subtree_nodes(root->left, k - dr - 2);
        }
        return dr + 1;
    }
    return -1;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    tree *root = new tree(1);
    root->left = new tree(2);
    root->right = new tree(3);
    root->left->left = new tree(4);
    root->left->right = new tree(5);
    root->right->left = new tree(6);
    root->right->right = new tree(7);

    int a=print_nodes_at_k(root, root->left, 3);

    return 0;
}