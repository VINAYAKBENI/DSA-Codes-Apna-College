#include <bits/stdc++.h>
#define e cout << endl;

using namespace std;

// Class Node
class node
{
public:
    int key;
    node *left;
    node *right;

    node(int val)
    {
        key = val;
        left = NULL;
        right = NULL;
    }
};

// Vertical Order Of Binary Tree
void vertical_order(node *root, int distance, map<int, vector<int>> &m)
{
    if (root == NULL)
    {
        return;
    }

    m[distance].push_back(root->key);

    vertical_order(root->left, distance - 1, m);
    vertical_order(root->right, distance + 1, m);
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    // Binary Tree
    node *root = new node(10);
    root->left = new node(7);
    root->right = new node(4);
    root->left->left = new node(3);
    root->left->right = new node(11);
    root->right->left = new node(14);
    root->right->right = new node(6);

    map<int, vector<int>> m;

    vertical_order(root, 0, m);

    cout<<"Vertical Order Of Binary Tree"<<endl;

    for (auto i = m.begin(); i != m.end(); i++)
    {
        for (int j = 0; j < (i->second).size(); j++)
        {
            cout << (i->second)[j] << " ";
        }
    }

    return 0;
}