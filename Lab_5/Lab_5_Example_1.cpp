//Inorder traversal using recursion.

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

void InOrderTraverse(Node *temp)
{
    if (temp == nullptr)
    {
        return;
    }

    InOrderTraverse(temp->left);
    cout << temp->data << " ";
    InOrderTraverse(temp->right);
}

int main()
{
    Node *root = nullptr;
    root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    InOrderTraverse(root);
}