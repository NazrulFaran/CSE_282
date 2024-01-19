//Create a linked list from an array and return the head.

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

void traverseLL(Node *head){
    Node *temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
}

int main(){
    int arr[]={5, 14, 3, 6, 20};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    Node *head= constractLL(arr, n);
    traverseLL(head);

    return 0;
}
