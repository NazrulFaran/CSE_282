//A C++ that show how to define a structure.

#include <iostream>
#include <cstring>
using namespace std;

struct Person
{
    string name;
    int citNo;
    float salary;
} person1;

int main()
{
    person1.name = "Nazrul Islam";
    person1.citNo = 102;
    person1.salary = 2500;

    cout << "Name: " << person1.name << endl;
    cout << "Citizenship No.: " << person1.citNo << endl;
    cout << "Salary: " << person1.salary<<"$";

    return 0;
}