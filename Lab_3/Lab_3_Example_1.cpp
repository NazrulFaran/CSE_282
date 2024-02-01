// Delete element from a particular position of the SLL.

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

Node *DelKElement(Node *head, int position)
{
    if (head != nullptr)
    {
        Node *temp, *current = head->next;
        if (position == 1)
        {
            if (head->next == nullptr)
            {
                return nullptr;
            }
            temp = head->next;
            head->next = nullptr;
            return temp;
        }
        temp = head;
        for (int i = 2; current != nullptr; i++)
        {
            if (i == position)
                break;
            temp = current;
            current = current->next;
        }
        temp->next = current->next;
        return head;
    }
}

int main()
{
    int arr[] = {5, 14, 3, 6, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    Node *head = constractLL(arr, n);
    traverseLL(head);
    head = DelKElement(head, 1);
    cout << endl;
    traverseLL(head);

    return 0;
}
