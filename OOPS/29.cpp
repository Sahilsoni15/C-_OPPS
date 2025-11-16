// CONSTRUCTORS

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // CREATING A COMSTRUCTOR
    // Constructor is  a special member function with the same name as of the class.
    // It is used to initializ the objets the of its class.
    // It is automaticaly invoked(call or execute karna) whenever object is created .

    Complex(void); // constructor decleration

    void print()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void) //------>>>>DEFAULT CONSTRUCTOR == as it takes no parameters ...............
{
    a = 10;
    b = 20;
}

int main()
{
    Complex c;
    c.print();
    return 0;
}

/*
========================CHARECTERSTICS OF CONSTRUCTOR==========================
1.It should be declared in the public section of the class.
2.They are automatically invoked whenever the object is created
3.They cannot return values and do not have return types
4.It can have default arguments 
5.We cannot refer to their address
*/