//Write a C++ program to find the position of an element from a Singly Linked List

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

int PosElement(Node *head, int element){
    int cnt=1;
    while (head != nullptr)
    {
        if(head->data==element) return cnt;
        head=head->next;
        cnt++;
    }
    
    return 0;
}

int main()
{
    int arr[] = {5, 14, 3, 6, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    Node *head = constractLL(arr, n);
    cout<<"Linked List : ";
    traverseLL(head);
    cout<<endl<<"Enter the element : ";
    cin>>n;
    int pos = PosElement(head, n);
    cout <<"Position : "<<pos;

    return 0;
}
