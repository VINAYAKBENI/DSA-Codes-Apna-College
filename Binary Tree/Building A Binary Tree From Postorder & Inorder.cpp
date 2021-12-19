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

// Searching Function
int search(int inorder[], int start, int end, int curr)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == curr)
        {
            return i;
        }
    }
    return -1;
}

// Building A Binary Tree From Postorder & Inorder
tree *buildtree(int postorder[], int inorder[], int start, int end)
{
    if (start > end)
    {
        return NULL;
    }

    static int i = end;
    int curr = postorder[i];
    i--;
    int pos = search(inorder, start, end, curr);
    tree *Tree = new tree(curr);
    if (start == end)
    {
        return Tree;
    }

    Tree->right = buildtree(postorder, inorder, pos + 1, end);
    Tree->left = buildtree(postorder, inorder, start, pos - 1);

    return Tree;
}

// In-Order Traversal
void inorder(tree *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    int inordr[] = {4, 2, 5, 1, 6, 3, 7};
    int postorder[] = {4, 5, 2, 6, 7, 3, 1};
    tree *root = buildtree(postorder, inordr, 0, 6);
    inorder(root);

    return 0;
}