// A C++ program to check whether a given tree is BST.

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

bool IsBST(Node *root)
{
    if (root == nullptr)
    {
        cout << "Root is empty";
        return 1;
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
            if (temp->data < temp->left->data)
            {
                return 0;
            }
            lot.push(temp->left);
        }
        if (temp->right != nullptr)
        {
            if (temp->data > temp->right->data)
            {
                return 0;
            }
            lot.push(temp->right);
        }
    }
    return 1;
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

    bool i = IsBST(root);
    if (i)
    {
        cout << "The tree is BST" << endl;
    }
    else
    {
        cout << "The tree is not BST" << endl;
    }
}