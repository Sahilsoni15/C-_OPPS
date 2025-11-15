// EXCHANGE OF THE NUMBERS (FRIEND FUNCTION EXAMPLE)
#include <iostream>
using namespace std;

class C2;

class C1
{
    int val1;
    friend void exchange(C1 &, C2 &);

public:
    void intData(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << val1 << endl;
    }
};

class C2
{
    int val2;
    friend void exchange(C1 &, C2 &);

public:
    void intData(int b)
    {
        val2 = b;
    }
    void display(void)
    {
        cout << val2 << endl;
    }

};

void exchange(C1 & x, C2 & y){
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}


int main()
{
    C1 oc1;
    C2 oc2;

    oc1.intData(34);
    oc2.intData(67);
    exchange(oc1, oc2);

    cout<<"The value of c1 after exchanging becomes: ";
    oc1.display();
    cout<<"The value of c2 after exchanging becomes: ";
    oc2.display();

    return 0;
}