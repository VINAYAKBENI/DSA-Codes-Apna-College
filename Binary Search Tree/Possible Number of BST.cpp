#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Binary Search Tree Class
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

// Possible Number of BST
vector<node *> constructTree(int start, int end)
{
    vector<node *> trees;
    if (start > end)
    {
        trees.push_back(NULL);
        return trees;
    }

    for (int i = start; i <= end; i++)
    {
        vector<node *> leftsubtrees = constructTree(start, i - 1);
        vector<node *> rightsubtrees = constructTree(i + 1, end);

        for (int j = 0; j < leftsubtrees.size(); j++)
        {
            node *left = leftsubtrees[j];

            for (int k = 0; k < rightsubtrees.size(); k++)
            {
                node *right = rightsubtrees[k];

                node *newnode = new node(i);
                newnode->left = left;
                newnode->right = right;

                trees.push_back(newnode);
            }
        }
    }
    return trees;
}

// Preorder Traversal
void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    vector<node *> totaltrees = constructTree(1, 3);

    for (int i = 0; i < totaltrees.size(); i++)
    {
        cout << i + 1 << " : ";
        preorder(totaltrees[i]);
        e
    }

    return 0;
}