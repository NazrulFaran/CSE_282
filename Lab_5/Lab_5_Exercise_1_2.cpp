// Inorder preorder postorder traversal of a tree.

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
void PreOrderTraverse(Node *temp)
{
    if (temp == nullptr)
    {
        return;
    }
    cout << temp->data << " ";
    PreOrderTraverse(temp->left);
    PreOrderTraverse(temp->right);
}
void PostOrderTraverse(Node *temp)
{
    if (temp == nullptr)
    {
        return;
    }

    PostOrderTraverse(temp->left);
    PostOrderTraverse(temp->right);
    cout << temp->data << " ";
}

int main()
{
    Node *tree2 = nullptr;
    tree2 = new Node(1);
    tree2->left = new Node(3);
    tree2->left->left = new Node(5);
    tree2->left->left->right = new Node(4);
    tree2->left->left->right->right = new Node(11);
    tree2->left->right = new Node(2);
    tree2->left->right->left = new Node(7);
    tree2->left->right->left->right = new Node(9);
    tree2->left->right->right = new Node(8);
    tree2->left->right->right->right = new Node(13);
    tree2->left->right->right->right->right = new Node(12);
    
    cout << "Inorder traversal of Tree 2 : ";
    InOrderTraverse(tree2);
    cout <<endl<< "Preorder traversal of Tree 2 : ";
    PreOrderTraverse(tree2);
    cout <<endl<< "Postorder traversal of Tree 2 : ";
    PostOrderTraverse(tree2);
}