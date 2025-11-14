/*
Q.Create two classes Rectangle and Calculator.
The Rectangle class should have two private data members:
length
breadth

Write a member function setDimensions() to set the values of length and breadth.

Make Calculator a friend class of Rectangle.

Inside the Calculator class, define the following three functions:

int area(Rectangle r) → returns the area of the rectangle

int perimeter(Rectangle r) → returns the perimeter of the rectangle

int diagonal(Rectangle r) → returns the diagonal length calculated using √(l² + b²)

In the main() function:

Create two Rectangle objects

Set dimensions for each

Use Calculator object to compute and display:

Area

Perimeter

Diagonal
*/
#include<cmath>
#include<iostream>
using namespace std;

class Rectangle;
class Calculator{

    public:
    int area(Rectangle r);
    int perimeter(Rectangle r);
    double diagonal(Rectangle r);

};

class Rectangle{
    int l,b;
    friend class Calculator;
    public:
    void setDimmenstions(int a,int c){
        l=a;
        b=c;
    }
};

int Calculator :: area(Rectangle o1){
    return (o1.l*o1.b);
};

int Calculator :: perimeter(Rectangle o1){
    return ((o1.l+o1.b)*2);
};

double Calculator :: diagonal(Rectangle o1){
    return sqrt(o1.l*o1.l+o1.b*o1.b);
};

int main(){
    Rectangle o1,o2;
    o1.setDimmenstions(2,3);
    o2.setDimmenstions(4,5);
    Calculator calc;

    cout << "Area of o1: " << calc.area(o1) << endl;
    cout << "Perimeter of o1: " << calc.perimeter(o1) << endl;
    cout << "Diagonal of o1: " << calc.diagonal(o1) << endl;

    cout << "\nArea of o2: " << calc.area(o2) << endl;
    cout << "Perimeter of o2: " << calc.perimeter(o2) << endl;
    cout << "Diagonal of o2: " << calc.diagonal(o2) << endl;
    return 0;
}