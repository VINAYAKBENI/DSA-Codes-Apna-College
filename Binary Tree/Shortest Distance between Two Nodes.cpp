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

// LCA
tree *LCA(tree *root, int n1, int n2)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == n1 || root->data == n2)
    {
        return root;
    }

    tree *leftlca = LCA(root->left, n1, n2);
    tree *rightlca = LCA(root->right, n1, n2);

    if (leftlca && rightlca)
    {
        return root;
    }

    if (leftlca != NULL)
    {
        return leftlca;
    }
    return rightlca;
}

// Find Distance Function
int find_distance(tree *root, int k, int dist)
{
    if (root == NULL)
    {
        return -1;
    }
    if (root->data == k)
    {
        return dist;
    }

    int left = find_distance(root->left, k, dist + 1);
    if (left != -1)
    {
        return left;
    }
    return find_distance(root->right, k, dist + 1);
}

// Shortest Distance Between 2 Nodes
int distance_between_nodes(tree *root, int n1, int n2)
{

    tree *lca = LCA(root, n1, n2);
    int d1 = find_distance(lca, n1, 0);
    int d2 = find_distance(lca, n2, 0);

    return d1 + d2;
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

    cout << distance_between_nodes(root, 4, 5);

    return 0;
}