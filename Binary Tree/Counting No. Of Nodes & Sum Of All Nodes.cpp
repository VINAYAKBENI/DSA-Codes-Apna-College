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

// Counting the No. Of Nodes
int Count_No_Of_Nodes(tree *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return Count_No_Of_Nodes(root->left) + Count_No_Of_Nodes(root->right) + 1;
}

// Sum Of All Nodes
int Sum_Of_All_Nodes(tree *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return Sum_Of_All_Nodes(root->left) + Sum_Of_All_Nodes(root->right) + root->data;
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

    cout << Count_No_Of_Nodes(root) << endl;
    cout << Sum_Of_All_Nodes(root);

    return 0;
}