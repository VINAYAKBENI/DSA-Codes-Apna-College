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

// Building BST Using Preorder
node *constructBSt(int preorder[], int *preoderidx, int key, int min, int max, int n)
{
    if (*preoderidx >= n)
    {
        return NULL;
    }

    node *root = NULL;
    if (key > min && key < max)
    {
        root = new node(key);
        *preoderidx = *preoderidx + 1;

        if (*preoderidx < n)
        {
            root->left = constructBSt(preorder, preoderidx, preorder[*preoderidx], min, key, n);
        }
        if (*preoderidx < n)
        {
            root->right = constructBSt(preorder, preoderidx, preorder[*preoderidx], key, max, n);
        }
    }

    return root;
}

// Preorder Traversal
void Preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    Preorder(root->left);
    Preorder(root->right);
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    /*
            10
          /  \
         2    13
       /     /
      1    11


    */

    int preorder[] = {10, 2, 1, 13, 11};
    int n = 5;
    int preorderidx = 0;

    node *root = constructBSt(preorder, &preorderidx, preorder[0], INT_MIN, INT_MAX, n);

    Preorder(root);

    return 0;
}