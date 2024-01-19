// a C++ program to delete the first node of a Singly Linked List.

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = nullptr;
    }
};

Node *constractLL(int arr[], int arrsize)
{
    Node *head, *temp, *current;
    head = new Node(arr[0]);
    current = head;
    for (int i = 1; i < arrsize; i++)
    {
        temp = new Node(arr[i]);
        current->next = temp;
        current = temp;
    }
    return head;
}

// Function for delete first node

Node *delFromFirst(Node *head)
{

    if (head != nullptr)
    {
        Node *temp = head->next;
        head->next = nullptr;
        return temp;
    }
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
    int arr[] = {};
    int size = sizeof(arr) / sizeof(arr[0]);
    Node *head = nullptr;

    if (size > 0)
    {
        head = constractLL(arr, size);
    }

    cout << "Link list : ";
    traverseLL(head);
    head = delFromFirst(head);
    cout << endl
         << "After deleting first node : ";
    traverseLL(head);

    return 0;
}
