/*
Take 6 integer values (0 to 5) into a stack and then find the factorial of
each stack element. Store the outputs in another stack. Print the output in the
following way:
Factorial : 0 = 1
Factorial : 1 = 1
Factorial : 2 = 4
*/

#include <bits/stdc++.h>
using namespace std;

int fact(stack<int> stk)
{
    int multi = 1;
    while (stk.top() != 0)
    {
        multi *= stk.top();
        stk.pop();
    }
    return multi;
}

int main()
{
    stack<int> stk;
    stack<int> factStk;
    int num;

    for (int i = 0; i < 6; i++)
    {
        stk.push(i);
    }

    while (!stk.empty())
    {
        num = fact(stk);
        stk.pop();
        factStk.push(num);
    }

    for (int i = 0; !factStk.empty(); i++)
    {
        cout<<"Factorial : "<<i<<" = "<<factStk.top()<<endl;
        factStk.pop();
    }
}