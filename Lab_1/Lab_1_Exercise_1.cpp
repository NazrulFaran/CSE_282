/* A C++ program to store and print the roll no.,
name, age, and marks of a student using structures. */

#include <iostream>
using namespace std;

struct student
{
    int roll, age, marks;
    string name;
} stu;

void display(struct student s);

int main()
{
    char c;
    cout << "Enter Roll: ";
    cin >> stu.roll;
    cout << "Enter Name: ";
    cin >> c;
    getline(cin, stu.name);
    stu.name = c + stu.name;
    cout << "Enter Age: ";
    cin >> stu.age;
    cout << "Enter Marks: ";
    cin >> stu.marks;

    display(stu);
    return 0;
}

void display(struct student s)
{
    cout << endl
         << "Displaying information" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll: " << s.roll << endl;
    cout << "Age: " << s.age << endl;
    cout << "Marks: " << s.marks << endl;
}
