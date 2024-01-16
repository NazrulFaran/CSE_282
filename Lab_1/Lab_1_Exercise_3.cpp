/* Enter the marks of 5 students in Chemistry, Mathematics, and Physics
(each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks, and phy_marks and then display the
percentage of each student. */

#include <iostream>
using namespace std;

struct marks
{
    int roll, chem_mark, phy_mark, math_mark;
    string name;
} stu[5];

void display(struct marks s[], int n);

int main()
{
    char c;
    for (int n = 0; n < 5; n++)
    {
        stu[n].roll=n+1;
    cout << "Enter Name of Roll "<<stu[n].roll<<" : ";
    cin >> c;
    getline(cin, stu[n].name);
    stu[n].name = c + stu[n].name;
    cout << "Enter the marks of Physics, Chemistry and Mathematics :";
    cin >> stu[n].phy_mark>>stu[n].chem_mark>>stu[n].math_mark;
    }

    display(stu, 5);
    return 0;
}

void display(struct marks s[], int n)
{
    cout << endl
         << "Displaying information"<< endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"Roll : "<<stu[i].roll;
        cout<<"\t Name : "<<stu[i].name;
        cout<<"\t Marks : "<<((stu[i].phy_mark+stu[i].chem_mark+stu[i].math_mark)/3.00)<<"%"<<endl;
    }
    
}
