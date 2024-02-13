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
    Node *tree1 = nullptr;
    tree1 = new Node(50);
    tree1->left = new Node(17);
    tree1->right = new Node(72);
    tree1->left->left = new Node(12);
    tree1->left->left->left = new Node(9);
    tree1->left->left->right = new Node(14);
    tree1->left->right = new Node(23);
    tree1->left->right->right = new Node(19);
    tree1->right->left = new Node(54);
    tree1->right->left->right = new Node(67);
    tree1->right->right = new Node(76);
    cout << "Inorder traversal of Tree 1 : ";
    InOrderTraverse(tree1);
    cout <<endl<< "Preorder traversal of Tree 1 : ";
    PreOrderTraverse(tree1);
    cout <<endl<< "Postorder traversal of Tree 1 : ";
    PostOrderTraverse(tree1);
}