// A C++ program to subtract two complex numbers.

#include <iostream>
using namespace std;

struct complex
{
    int real, img;
} n1, n2, n3;

void subtract(struct complex &d1, struct complex &d2, struct complex &d3)
{
    n3.real = n1.real - n2.real;
    n3.img = n1.img - n2.img;
}

void dis(struct complex &s)
{
    if (s.img < 0)
    {
        cout <<"(" <<s.real << " " << s.img << "i)";
    }
    else
    {
        cout <<"(" << s.real << " + " << s.img << "i)";
    }
}

int main()
{
    cout << "Enter first complex number" << endl
         << "Real Part: ";
    cin >> n1.real;
    cout << "Imaginary part: ";
    cin >> n1.img;
    cout << "Enter second complex number" << endl
         << "Real Part: ";
    cin >> n2.real;
    cout << "Imaginary part: ";
    cin >> n2.img;

    subtract(n1, n2, n3);
    cout << "Substraction of two complex numbers:" << endl;
    dis(n1);
    cout<<" - ";
    dis(n2);
    cout<<" = ";
    dis(n3);
    
}