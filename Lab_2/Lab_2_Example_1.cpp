// create a Single Linked List.

#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{

    Node *a, *b, *c, *head;
    a = (Node *)malloc(sizeof(Node));
    b = (Node *)malloc(sizeof(Node));
    c = (Node *)malloc(sizeof(Node));

    a->data = 20;
    a->next = b;
    b->data = 10;
    b->next = c;
    c->data = 30;
    c->next = nullptr;

    head = a;

    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }

    return 0;
}