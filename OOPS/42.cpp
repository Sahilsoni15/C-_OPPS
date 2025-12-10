#include<iostream>
#include<cmath>
using namespace std;

/*
Create 2 classes:
    1.SimpleCalculator - Takes input of 2 numbers  using a utility function and 
    perfoms +,-,*,/ and displays the results using another funtion
    2.ScientificCalculator - Takes input of 2 numbers using a utility function and perfoms any 
    four scientific operation of your choice and displays the results using another function
    3.Create another classHybridCalculator and inherit it using these 2 classes:
    
    Q1: What type of Inheritance are you using?
    ANS-->Multiple inheritance

    Q2: Which mode of Inheritacnce are you using?
    ANS-->Public inheritance

    Q3:Create an object of HybridCalculator and display results of simple and scientific calculator.
    ANS-->HybridCalculator calcu;
    calcu.demostrateall();

    Q4:How is code reusability implmented?
    ANS-->Inheritance enables direct method reuse:
        -->HybridCalculator::demostrateall() calls input(), output(), scientific() without redefinition
        -->Protected p,q shared across all 3 classes → single data storage
        -->Virtual inheritance eliminates diamond problem → clean access
*/

class SimpleCalculator {
    int a, b;
    public:
        void getDataSimple()
        {
            cout<<"Enter the value of a"<<endl;
            cin>>a;
            cout<<"Enter the value of b"<<endl;
            cin>>b;
        }

        void performOperationsSimple(){
            cout<<"The value of a + b is: "<<a + b<<endl;
            cout<<"The value of a - b is: "<<a - b<<endl;
            cout<<"The value of a * b is: "<<a * b<<endl;
            cout<<"The value of a / b is: "<<a / b<<endl;
        }
};

class ScientificCalculator{
    int a, b;

    public:
        void getDataScientific()
        {
            cout << "Enter the value of a" << endl;
            cin >> a;
            cout << "Enter the value of b" << endl;
            cin >> b;
        }

        void performOperationsScientific()
        { 
            cout << "The value of cos(a) is: " << cos(a) << endl;
            cout << "The value of sin(a) is: " << sin(a) << endl;
            cout << "The value of exp(a) is: " << exp(a) << endl;
            cout << "The value of tan(a) is: " << tan(a) << endl;
        }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator{
    
};

int main()
{
    HybridCalculator calc;
    calc.getDataScientific();
    calc.performOperationsScientific();
    calc.getDataSimple();
    calc.performOperationsSimple();
    
    return 0;
}

// class SimpleCalculator{
//     protected:
//         int p;
//         int q;
//     public:
//         void input(){
//             cout<<"Enter a 1st number: ";
//             cin>>p;
//             cout<<endl;
//             cout<<"Enter a 2nd number: ";
//             cin>>q;
//             cout<<endl;
//         }

//         void output(){
//             cout<<"----Simple Calculator----";
//             cout<<endl;
//             cout<<"Addition is "<<p+q<<endl;
//             cout<<"Subtraction is "<<p-q<<endl;
//             cout<<"Multiplication is "<<p*q<<endl;
//             cout<<"Division is "<<p/q<<endl;
//         }
// };

// class ScientificCalculator:virtual public SimpleCalculator{
//     public:
//         void scientific(){
//             cout<<endl;
//             cout<<"----Scientific Calculator----";
//             cout<<endl;
//             cout<<"Square root of p is "<<sqrt(p)<<endl;
//             cout<<"Cuberoot of p is "<<cbrt(p)<<endl;
// 			cout<<"Square root of q is "<<sqrt(q)<<endl;
// 			cout<<"Cuberoot of q is "<<cbrt(q)<<endl;
// 			cout<<"p to the power q is "<<pow(p,q)<<endl;
//         }
// };

// class HybridCalculator : virtual public SimpleCalculator,public ScientificCalculator{
//     public:
//         void demonstrateall(){
//             input();

//             output();
//             scientific();
//         }
// };

// int main(){
//     HybridCalculator calcu;
//     calcu.demonstrateall();
//     return 0;
// }