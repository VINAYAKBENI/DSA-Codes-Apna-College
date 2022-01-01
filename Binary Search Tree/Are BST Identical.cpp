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

// Are BST Identical
bool Is_Identical(node *root1, node *root2)
{
    if (root1 == NULL && root2 == NULL)
    {
        return true;
    }
    else if (root1 == NULL || root2 == NULL)
    {
        return false;
    }
    else
    {
        bool cond1 = root1->data == root2->data;
        bool cond2 = Is_Identical(root1->left, root2->left);
        bool cond3 = Is_Identical(root1->right, root2->right);

        if (cond1 && cond2 && cond3)
        {
            return true;
        }
        return false;
    }
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    /*
            12
          /   \
         9    15
       /  \
      5    10


    */

    node *root = new node(12);
    root->left = new node(9);
    root->left->left = new node(5);
    root->left->right = new node(10);
    root->right = new node(15);

    cout<<Is_Identical(root,root)<<endl;

    /*
            12
          /   \
         9    15
       /  \
      5    11


    */

    node *root1 = new node(12);
    root1->left = new node(9);
    root1->left->left = new node(5);
    root1->left->right = new node(11);
    root1->right = new node(15);

    cout<<Is_Identical(root,root1)<<endl;

    return 0;
}