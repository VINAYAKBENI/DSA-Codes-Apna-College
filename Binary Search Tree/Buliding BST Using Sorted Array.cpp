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

// Building BST Using Sorted Array
node *Sorted_Array_To_BSt(int arr[], int start, int end)
{
    if (start > end)
    {
        return NULL;
    }

    int mid = (start + end) / 2;
    node *root = new node(arr[mid]);

    root->left = Sorted_Array_To_BSt(arr, start, mid - 1);
    root->right = Sorted_Array_To_BSt(arr, mid + 1, end);

    return root;
}

// Preorder Traversal
void Preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    Preorder(root->left);
    Preorder(root->right);
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inputvs.in", "r", stdin);
    freopen("outputvs.in", "w", stdout);
#endif

    /*
            30
          /   \
         10    40
          \      \
           20    50


    */

    int arr[] = {10, 20, 30, 40, 50};

    node *root = Sorted_Array_To_BSt(arr, 0, 4);

    Preorder(root);

    return 0;
}