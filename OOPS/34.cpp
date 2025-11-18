// COPY CONSTRUCTOR
#include<iostream>
using namespace std;

class Number{
    int a;
    public:
        //we need to make the this default constructor 
        Number(){
            a=0;
        }                
        Number(int num){
            a=num;
        }

        //when no copy constructor is found,compiler supplies its own copy constructor
        Number(Number &obj){
            cout<<"Copy constructor called "<<endl;
            a=obj.a;
        }        
        void display(){
            cout<<"The number for this object is "<<a<<endl;
        }
};

// Number :: Number(int n)
int main(){
    Number x,y,z(45);
    x.display();
    y.display();
    z.display();
    Number z1(z);//copy constructor invoked
    z1.display();

    // z2=z; //copy constructor is not called
    // z2.display();

    Number z3=z;
    z3.display();
    // z1 should exactly resemble z or x or y
    return 0;
}