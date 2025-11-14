// FRIEND CLASS AND MEMBER FRIEND FUNCTIONS
#include <iostream>
using namespace std;

// FORWARD DECLERATION
// 3RD
class Complex;

// 2ND
class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    // ONLY HERE DECLERE
    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
    int sumDompComplex(Complex,Complex);
};

// 1ST
class Complex
{
    int a, b;
    // Individually declaring functions as friends
    //  friend int Calculator :: sumRealComplex(Complex o1, Complex o2);
    //  friend int Calculator :: sumCompComplex(Complex o1, Complex o2);

    // ALITER:---------------------->>>>>>>>>>>> DECLARING THE ENTIRE CALCULATOR CLASS AS FRIEND <<<<<<<<<<<<<<<<<<<<<<<<<------------------------------------
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

// 4TH
int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
};

int Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b );
};

int Calculator :: sumDompComplex(Complex o1,Complex o2){
    return (o1.a+o2.b);
};

// 5TH
int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);

    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "Sum of real part of o1 and o2 is " << res << endl;
    
    int resu = calc.sumCompComplex(o1, o2);
    cout << "Sum of Imaginary part of o1 and o2 is " << resu << endl;

    int result = calc.sumDompComplex(o1, o2);
    cout << "Sum of o1 real and o2 imaginary is " << result << endl;
    
    
    return 0;
}