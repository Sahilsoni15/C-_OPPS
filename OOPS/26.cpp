// FRIEND FUNCTION
#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    // Bellow Line means that non memeber - sumComplex function is allowed to do anything with the my private data or parts (members)

    friend Complex sumComplex(Complex o1, Complex o2);
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));

    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setNumber(2, 3);
    c1.printNumber();

    c2.setNumber(3, 5);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}

/*
Definition:A friend function in Object-Oriented Programming is a non-member function
that is granted special access to a class’s private and protected members through the friend keyword.
It allows controlled access to internal data without being part of the class itself.
*/
/*
PROPERTIES OF FRIEND FUNCTION
1.Not in the scope of class
2.Since it is not in the scope of the class, it cannot be called from the objects of that class. c1.sumComplex() ==Invalid
3.Can be invoked without the help of any object
4.Usually contains the object as arguments
5.Can be declared inside public or private section of the class.
6.It cannot access the members directly by their names and need object_name.member_name to access any member.
*/