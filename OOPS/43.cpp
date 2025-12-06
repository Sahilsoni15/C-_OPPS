//AMBIGUITY RESOLUTION
#include<iostream>
using namespace std;

class Base1{
    public:
        void greet(){
            cout<<"How are you ?"<<endl;
        }
};

class Base2{
    public:
        void greet(){
            cout<<"Kaise ho ?"<<endl;
        }
};

class Derived: public Base1,public Base2{
    int a;
    public:
    //AMBIGUITY RESOLUTION
        void greet(){
            Base1 ::greet();
            //Base2 ::greet();
        }
};
int main(){
    // Base1 obj1;
    // obj1.greet();
    // Base2 obj2;
    // obj2.greet();
    Derived d;
    d.greet();
    return 0;
}