//Write a C++ program to determine whether a given tree is perfect.
//[Hint: height of left subtree and right subtree is equal]

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;

    Node(int x)
    {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};

int IsBalance(Node *root)
{
    if (root == NULL)
        return 0;
    int lh = IsBalance(root->left);
    if (lh == -1)
        return -1;
    int rh = IsBalance(root->right);
    if (rh == -1)
        return -1;
    if (lh-rh != 0)
        return -1;
    return 1 + max(lh, rh);
}

int main()
{
    Node *root = nullptr;

    root = new Node(50);
    root->left = new Node(17);
    root->left->left = new Node(12);

    root->left->right = new Node(23);

    root->right = new Node(72);
    root->right->left = new Node(54);

    root->right->right = new Node(76);

    int n = IsBalance(root);
    if (n == -1)
    {
        cout << "Tree is not Perfect" << endl;
    }
    else
    {
        cout << "Tree is Perfect" << endl;
    }
}