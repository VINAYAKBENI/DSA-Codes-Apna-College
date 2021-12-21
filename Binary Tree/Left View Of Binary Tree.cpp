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

// Left View Of Binary Tree
void left_view(tree *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<tree *> q;
    q.push(root);

    while (!q.empty())
    {

        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            tree *curr = q.front();
            q.pop();

            if (i == 0)
            {
                cout << curr->data << " ";
            }
            if (curr->left != NULL)
            {
                q.push(curr->left);
            }
            if (curr->right != NULL)
            {
                q.push(curr->right);
            }
        }
    }
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

    cout << "Left View is : ";
    left_view(root);

    return 0;
}