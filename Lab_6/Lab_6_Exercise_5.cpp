// A C++ program to find the sum of the left child of a given tree
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int x)
    {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};

vector<int> LeftChild(Node *root)
{
    vector<int> vec;
    if (root == nullptr)
    {
        cout << "Tree is empty";
        return vec;
    }
    queue<Node *> qu;
    qu.push(root);
    Node *temp = nullptr;
    while (!qu.empty())
    {
        temp = qu.front();
        qu.pop();

        if (temp->left != nullptr)
        {
            qu.push(temp->left);
            vec.push_back(temp->left->data);
        }
        if (temp->right != nullptr)
        {
            qu.push(temp->right);
        }
    }
    return vec;
}

int main()
{
    int sum = 0;
    Node *root = nullptr;
    vector<int> v;

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

    v = LeftChild(root);

    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }
    cout << "Sum = " << sum;
}