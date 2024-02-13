// Level-Order traversal in C++.

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

void LevelOrderTraverse(Node *root)
{
    if (root == nullptr)
    {
        cout << "Root is empty";
        return;
    }
    queue<Node *> lot;
    lot.push(root);
    Node *temp = nullptr;
    while (!lot.empty())
    {
        temp = lot.front();
        lot.pop();

        if (temp->left != nullptr)
        {
            lot.push(temp->left);
        }
        if (temp->right != nullptr)
        {
            lot.push(temp->right);
        }
        cout << temp->data << " ";
    }
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
    LevelOrderTraverse(root);
}