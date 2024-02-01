// Write a C++ program to insert an element at kth position in a singly linked list.

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

Node *InsertKElement(Node *head, int position, int newnum)
{
    Node *temp = new Node(newnum);
    if (head != nullptr)
    {
        if (position == 1)
        {
            temp->next = head;
            return temp;
        }
        Node *current = head->next, *pre = head;
        for (int i = 2; current != nullptr; i++)
        {
            if (i == position)
            {
                pre->next = temp;
                temp->next = current;
                return head;
            }
            pre = current;
            current = current->next;
        }
        pre->next=temp;
        return head;
    }
    return temp;
}

int main()
{
    int arr[] = {5, 14, 3, 6, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    Node *head = constractLL(arr, n);
    cout<<"Linked List : ";
    traverseLL(head);
    cout<<endl<<"Enter the newnum and position : ";
    int num, pos;
    cin>>num>>pos;
    head = InsertKElement(head, pos, num);
    cout << "New Linked List : ";
    traverseLL(head);

    return 0;
}
