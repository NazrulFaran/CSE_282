// Take 5 integer values into a stack. Find the summation of all the stack elements.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum=0;
    stack<int> mystack;
    mystack.push(42);
    mystack.push(11);
    mystack.push(5);
    mystack.push(71);
    mystack.push(43);

    while (!mystack.empty())
    {
        sum+=mystack.top();
        mystack.pop();
    }
    cout<<"Sum : "<< sum;
}