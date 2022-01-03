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

// Class For Storing Information Of Each Node
class info
{
public:
    int size;
    int min;
    int max;
    int ans;
    bool isBST;
};

// Largest BST In Binary Tree
info largest_BST_In_BT(node *root)
{

    if (root == NULL)
    {
        return {0, INT_MAX, INT_MIN, 0, true};
    }
    // Leaf Node
    if (root->left == NULL && root->right == NULL)
    {
        return {1, root->data, root->data, 1, true};
    }
    info leftinfo = largest_BST_In_BT(root->left);
    info rightinfo = largest_BST_In_BT(root->right);

    // Current Node Information
    info curr;
    curr.size = (leftinfo.size + rightinfo.size + 1);

    if (leftinfo.isBST && rightinfo.isBST && leftinfo.max < root->data && rightinfo.min > root->data)
    {
        curr.min = min(root->data, min(leftinfo.min, rightinfo.min));
        curr.max = max(root->data, max(leftinfo.max, rightinfo.max));

        curr.ans = curr.size;
        curr.isBST = true;

        return curr;
    }

    curr.ans = max(leftinfo.ans, rightinfo.ans);
    curr.isBST = false;

    return curr;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    /*
           15
         /   \
        20    30
      /
    5

    */

    node *root = new node(15);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(5);

    cout << "Largest BST In Binary Tree : " << largest_BST_In_BT(root).ans << endl;

    /*
           5
         /  \
        3    6
      /  \
    2     4

    */

    node *root1 = new node(5);
    root1->left = new node(3);
    root1->right = new node(6);
    root1->left->left = new node(2);
    root1->left->right = new node(4);

    cout << "Largest BST In Binary Tree : " << largest_BST_In_BT(root1).ans << endl;

    return 0;
}