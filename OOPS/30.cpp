#include<iostream>
using namespace std;

class Complex{
    int a,b;

    public:
    Complex(int ,int); //Constructor Decleration

    void printnum(){
        cout<<"Your number is "<<a <<" + "<<b<<"i"<<endl;

    }
};

Complex :: Complex(int x, int y){      //------->This is Parameterized Constructor as it takes 2 parameters
    a=x;
    b=y;
}

int main(){
    //Implicit Call
    Complex a(4,6);
    a.printnum();

    //EXPLICIT CALL
    Complex b=Complex(5,6);
    b.printnum();
    return 0;
}