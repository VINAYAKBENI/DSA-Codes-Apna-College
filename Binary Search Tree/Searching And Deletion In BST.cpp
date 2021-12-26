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

// Search In BST
node *search_in_BST(node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == key)
    {
        return root;
    }

    if (key < root->data)
    {
        return search_in_BST(root->left, key);
    }

    return search_in_BST(root->right, key);
}

// Inorder Successor In BST
node *inordersucc(node *root)
{
    node *curr = root;
    while (curr && curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
}

// Delete In BST
node *delete_in_BST(node *root, int key)
{

    if (root->data > key)
    {
        root->left = delete_in_BST(root->left, key);
    }
    else if (root->data < key)
    {
        root->right = delete_in_BST(root->right, key);
    }
    else
    {
        if (root->left == NULL)
        {
            node *temp = root->right;
            delete (root);
            return temp;
        }
        else if (root->right == NULL)
        {
            node *temp1 = root->left;
            delete (root);
            return temp1;
        }

        node *temp = inordersucc(root->right);
        root->data = temp->data;
        root->right = delete_in_BST(root->right, temp->data);
    }
    return root;
}

// Inorder Traversal
void inorder(node *root)
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

    /*
            4
          /  \
         2    5
       /  \    \
      1    3    6


    */

    node *root = new node(4);
    root->left = new node(2);
    root->left->left = new node(1);
    root->left->right = new node(3);
    root->right = new node(5);
    root->right->right = new node(6);

    if (search_in_BST(root, 6) == NULL)
    {
        cout << "Key Missing" << endl;
    }
    else
    {
        cout << "Key Found" << endl;
    }

    inorder(root);
    e

        root = delete_in_BST(root, 5);

    inorder(root);

    return 0;
}