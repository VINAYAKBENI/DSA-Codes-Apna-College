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

// Apporach 1 (Brute Force)
//  Height of Binary Tree
int height(tree *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh, rh) + 1;
}

// Height Of Balanced Binary Tree
bool isbalanced(tree *root)
{
    if (root == NULL)
    {
        return 1;
    }

    if (isbalanced(root->left) == false)
    {
        return 0;
    }
    if (isbalanced(root->right) == false)
    {
        return 0;
    }

    int left_height = height(root->left);
    int right_height = height(root->right);

    if (abs(left_height - right_height) <= 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Apporach 2 (Optimised)
// Height Of Balanced Binary Tree
bool isbalanced_optimised(tree *root, int *h)
{
    if (root == NULL)
    {
        return 1;
    }

    int lh = 0, rh = 0;

    if (isbalanced_optimised(root->left, &lh) == false)
    {
        return 0;
    }
    if (isbalanced_optimised(root->right, &rh) == false)
    {
        return 0;
    }

    *h=max(lh,rh)+1;

    if (abs(lh - rh) <= 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif
    // Balanced Tree
    tree *root = new tree(1);
    root->left = new tree(2);
    root->right = new tree(3);
    root->left->left = new tree(4);
    root->left->right = new tree(5);
    root->right->left = new tree(6);
    root->right->right = new tree(7);
    root->left->left->left = new tree(8);

    cout << isbalanced(root) << endl;

    // Unbalanced Tree
    tree *root1 = new tree(1);
    root1->left = new tree(2);
    root1->right = new tree(3);
    root1->left->left = new tree(4);
    root1->left->right = new tree(5);
    root1->right->left = new tree(6);
    root1->right->right = new tree(7);
    root1->left->left->left = new tree(8);

    int h=0;
    cout << isbalanced_optimised(root1,&h);

    return 0;
}