// a C++ program to delete the last node of a Singly Linked List.

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

void traverseLL(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// Function for delete last node

Node *delFromLast(Node *head)
{

    if (head != nullptr)
    {
        if (head->next == nullptr)
        {
            return nullptr;
        }

        Node *current, *temp = head;
        while (temp->next != nullptr)
        {
            current = temp;
            temp = temp->next;
        }
        current->next = nullptr;
        return head;
    }

    return nullptr;
}

int main()
{
    int arr[] = {5, 14, 3, 6, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    Node *head = nullptr;

    if (size > 0)
    {
        head = constractLL(arr, size);
    }

    cout << "Link list : ";
    traverseLL(head);
    head = delFromLast(head);
    cout << endl
         << "After deleting Last node : ";
    traverseLL(head);

    return 0;
}
