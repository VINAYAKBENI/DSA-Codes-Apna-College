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

// Finding Max Path Sum
int find_path_sum(tree *root, int &ans)
{
    if (root == NULL)
    {
        return 0;
    }

    int left = find_path_sum(root->left, ans);
    int right = find_path_sum(root->right, ans);

    int nodemax = max(max(root->data, root->data + left + right), max(root->data + left, root->data + right));

    ans = max(ans, nodemax);

    int singlepath = max(root->data, max(root->data + left, root->data + right));
    return singlepath;
}

// Printing All Nodes At Distance K
int Maximum_Path_Sum(tree *root)
{
    int ans = INT_MIN;
    find_path_sum(root, ans);
    return ans;
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

    cout<<Maximum_Path_Sum(root);

    return 0;
}