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

// Height of a Binary Tree
int Height_Of_Binary_tree(tree *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftheight = Height_Of_Binary_tree(root->left);
    int rightheight = Height_Of_Binary_tree(root->right);

    return max(leftheight, rightheight) + 1;
}

// Diameter Of Binary Tree (Brute Force)
int Diameter_Of_Binary_Tree(tree *root)
{

    if (root == NULL)
    {
        return 0;
    }

    // Calulating Heights
    int left_height = Height_Of_Binary_tree(root->left);
    int right_height = Height_Of_Binary_tree(root->right);

    int curr_diameter = left_height + right_height + 1;

    // Calulating Diamters
    int left_dia = Diameter_Of_Binary_Tree(root->left);
    int right_dia = Diameter_Of_Binary_Tree(root->right);

    return max(curr_diameter, max(left_dia, right_dia));
}

// Diameter Of Binary Tree (Optimised)
int Diameter_Of_Binary_Tree_optimised(tree *root, int *height)
{

    if (root == NULL)
    {
        *height = 0;
        return 0;
    }

    int left_height = 0, right_height = 0;

    // Calulating Diamters
    int left_dia = Diameter_Of_Binary_Tree_optimised(root->left, &left_height);
    int right_dia = Diameter_Of_Binary_Tree_optimised(root->right, &right_height);

    int curr_diameter = left_height + right_height + 1;
    *height = max(left_height, right_height) + 1;

    return max(curr_diameter, max(left_dia, right_dia));
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
    root->left->left->left = new tree(8);

    cout << Height_Of_Binary_tree(root) << endl;
    cout << Diameter_Of_Binary_Tree(root) << endl;
    int h = 0;
    cout << Diameter_Of_Binary_Tree_optimised(root, &h);

    return 0;
}