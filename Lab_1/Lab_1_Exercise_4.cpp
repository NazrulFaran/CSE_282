// A C++ program to add two distances in inch-feet using structure.

#include <iostream>
using namespace std;

struct distance
{
    int feet, inches;
} d1, d2, d3;

void add(struct distance &d1, struct distance &d2, struct distance &d3)
{
    d3.feet = d1.feet + d2.feet;
    d3.inches = d1.inches + d2.inches;
    if (d3.inches >= 12)
    {
        d3.feet += (d3.inches / 12);
        d3.inches %= 12;
    }
}

int main(){
    cout<<"Enter first distance"<<endl<<"Feet: ";
    cin>>d1.feet;
    cout<<"Inch: ";
    cin>>d1.inches;
    cout<<"Enter second distance"<<endl<<"Feet: ";
    cin>>d2.feet;
    cout<<"Inch: ";
    cin>>d2.inches;

    add(d1, d2, d3);
    cout<<"Sum of these distances"<<endl;
    cout<<"Feet: "<<d3.feet<<"\t Inch: "<<d3.inches;
}