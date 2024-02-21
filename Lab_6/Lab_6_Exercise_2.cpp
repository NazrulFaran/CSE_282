// Check whether a tree is balanced or not.

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
    if (abs(lh - rh) > 1)
        return -1;
    return 1 + max(lh, rh);
}

int main()
{
    Node *root = nullptr;

    root = new Node(50);
    root->left = new Node(17);
    root->left->left = new Node(12);
    root->left->left->left = new Node(9);
    root->left->left->right = new Node(14);
    root->left->right = new Node(23);
    root->left->right->right = new Node(19);
    root->right = new Node(72);
    root->right->left = new Node(54);
    root->right->left->right = new Node(67);
    root->right->right = new Node(76);

    int n = IsBalance(root);
    if (n == -1)
    {
        cout << "Tree is not balanced" << endl;
    }
    else
    {
        cout << "Tree is balanced" << endl;
    }
}