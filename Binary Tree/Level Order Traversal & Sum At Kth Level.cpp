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

// Level Order Traversal (Using Queue)
void levelorder(tree *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<tree *> q;

    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        tree *node = q.front();
        q.pop();

        if (node != NULL)
        {
            cout << node->data << " ";
            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
        }
        else if (!q.empty())
        {
            cout << endl;
            q.push(NULL);
        }
    }
}

// Sum At Kth Level In Binary Tree
int sum_at_kth_level(tree *root, int k)
{
    if (root == NULL)
    {
        return -1;
    }

    queue<tree *> q;
    q.push(root);
    q.push(NULL);
    int level = 0, sum = 0;

    while (!q.empty())
    {
        tree *node = q.front();
        q.pop();
        
        if (node != NULL)
        {
            if (level == k)
            {
                sum += node->data;
            }
            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
        }
        else if (!q.empty())
        {
            level++;
            q.push(NULL);
        }
    }
    return sum;
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

    levelorder(root);
    e
            cout
        << sum_at_kth_level(root, 2);

    return 0;
}