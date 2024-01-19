// Insert a node at the beginning of the list.

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

/* Function for Insert a node at the beginning */

Node *InsertAtBegin(Node *head, int newnum)
{
    Node *temp = new Node(newnum);
    if (head != nullptr)
    {
        temp->next = head;
    }
    return temp;
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
    int size = sizeof(arr) / sizeof(arr[0]);
    int newnum;

    Node *head=nullptr;
    if(size>0){
        head = constractLL(arr, size);
    }
    cout << "Link List: ";
    traverseLL(head);
    cout << endl<< "Enter a value you want to add at begin : ";
    cin >> newnum;
    head = InsertAtBegin(head, newnum);
    cout<<"New Link List : ";
    traverseLL(head);

    return 0;
}
