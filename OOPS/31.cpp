// CONSTRUCTOR OVERLOARDING
#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // DEFAULT CONSTRUCTOR
    Complex()
    {
        a = 0;
        b = 0;
    }

    // PARAMETERIZED CONSTRUCTOR
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    // PARAMETERIZED CONSTRUCTOR
    Complex(int x)
    {
        a = x;
        b = 0;
    }

    void printnumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1(4, 8);
    c1.printnumber();

    Complex c2(7);
    c2.printnumber();

    Complex c3;
    c3.printnumber();
    return 0;
}
