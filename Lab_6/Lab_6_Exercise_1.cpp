// Find the height of a binary tree.

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

int TreeHeight(Node *root)
{
    if (root == nullptr)
    {
        return 0;
    }

    int lh = 1 + TreeHeight(root->left);
    int rh = 1 + TreeHeight(root->right);
    return max(lh, rh);
}

int main()
{
    Node *root = nullptr;

    root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->left->left = new Node(5);
    root->left->left->right = new Node(6);
    root->right = new Node(3);
    int height = TreeHeight(root);
    cout << "Height of the tree : "<<height;
}