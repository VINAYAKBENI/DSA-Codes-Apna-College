#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Class of Binary Search Tree
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

// Check_For_BST
bool is_BST(node *root, node *min, node *max)
{
    if (root == NULL)
    {
        return true;
    }

    if (min != NULL && root->data <= min->data)
    {
        return false;
    }

    if (max != NULL && root->data >= max->data)
    {
        return false;
    }

    bool leftvalid = is_BST(root->left, min, root);
    bool rightvalid = is_BST(root->right, root, max);

    return leftvalid && rightvalid;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    /*
            30
          /   \
         10    40
          \      \
           20    50


    */

    node *root = new node(30);
    root->left = new node(10);
    root->left->right = new node(20);
    root->right = new node(40);
    root->right->right = new node(50);

    cout << is_BST(root, NULL, NULL);

    /*
            11
          /   \
         10    40
          \      \
           20    50

 
    */

    e
    node *root1 = new node(11);
    root1->left = new node(10);
    root1->left->right = new node(20);
    root1->right = new node(40);
    root1->right->right = new node(50);

    cout << is_BST(root1, NULL, NULL);

    return 0;
}