//Write a C++ program to find the length of a singly linked list.

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

//Function for find length of a linklist

int lengthLL(Node *head){
    Node *temp=head;
    int cnt =0;
    while(temp!=nullptr){
        temp= temp->next;
        cnt++;
    }
    return cnt;
}

int main(){
    int arr[]={5, 14, 3, 6, 20};
    int n= sizeof(arr)/sizeof(arr[0]);
    Node *head= constractLL(arr, n);

    cout<<"Link list : ";
    traverseLL(head);
    cout<<endl<<"Length of the linklist : "<<lengthLL(head);

    return 0;
}
