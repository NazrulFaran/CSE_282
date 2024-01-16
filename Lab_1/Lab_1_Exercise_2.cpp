/* A C++ program to store roll no. (starting from 1), name and age of
5 students and then print the details of the student with roll no. */

#include <iostream>
using namespace std;

struct student
{
    int roll, age;
    string name;
} stu[5];

void display(struct student s);

int main()
{
    char c;
    int n;
    for (n = 0; n < 5; n++)
    {
        stu[n].roll=n+1;
    cout << "Enter Name of Roll "<<stu[n].roll<<" : ";
    cin >> c;
    getline(cin, stu[n].name);
    stu[n].name = c + stu[n].name;
    cout << "Enter Age of Roll "<<stu[n].roll<<" : ";
    cin >> stu[n].age;
    }

    cout<<"Details of the student with Roll: ";
    cin>>n;
    n--;
    display(stu[n]);
    return 0;
}

void display(struct student s)
{
    cout << endl
         << "Displaying information"<< endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll: " << s.roll << endl;
    cout << "Age: " << s.age << endl;
}
