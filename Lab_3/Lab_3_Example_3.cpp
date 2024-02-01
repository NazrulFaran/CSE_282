// Create a doubly linked list from an array of values.

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *pre, *next;

    Node(int x)
    {
        data = x;
        pre = nullptr;
        next = nullptr;
    }

    Node(int x, Node *prev)
    {
        data = x;
        pre = prev;
        next = nullptr;
    }
};

Node *consDLL(int arr[], int arrsize)
{
    Node *head, *temp, *current;
    head = new Node(arr[0]);
    current = head;
    for (int i = 1; i < arrsize; i++)
    {
        temp = new Node(arr[i], current);
        current->next = temp;
        current = temp;
    }
    return head;
}

void traverseLL(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    int arr[] = {5, 14, 3, 6, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node *head = nullptr;
    if (n >= 1)
    {
        head = consDLL(arr, n);
    }
    traverseLL(head);

    return 0;
}
