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

// ZigZag Traversal In BST
void zigzag_traversal(node *root)
{
    if (root == NULL)
    {
        return;
    }

    stack<node *> currlevel;
    stack<node *> nextlevel;

    bool left_to_right = true;

    currlevel.push(root);

    while (!currlevel.empty())
    {
        node *temp = currlevel.top();
        currlevel.pop();

        //Left To Right
        if (temp)
        {
            cout << temp->data << " ";

            if (left_to_right)
            {
                if (temp->left)
                {
                    nextlevel.push(temp->left);
                }
                if (temp->right)
                {
                    nextlevel.push(temp->right);
                }
            }

            // Right To Left
            else
            {
                if (temp->right)
                {
                    nextlevel.push(temp->right);
                }
                if (temp->left)
                {
                    nextlevel.push(temp->left);
                }
            }
        }
        if (currlevel.empty())
        {
            left_to_right = !left_to_right;
            swap(currlevel, nextlevel);
        }
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

    zigzag_traversal(root);

    return 0;
}