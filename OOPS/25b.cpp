#include<iostream>
using namespace std;


class Complex{
    int a;
    int b;
    int c;
    public:
        void getdata(int v1,int v2){
            a=v1;
            b=v2;
        }

        void getdataBySum(Complex o1,Complex o2){
            a=o1.a+o2.a;
            b=o1.b+o2.b;
        }

        void printNum(){
            cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;
        }

};
int main(){
    
    Complex c1,c2,c3;
    c1.getdata(1,2);
    c1.printNum();

    c2.getdata(3,4);
    c2.printNum();

    c3.getdataBySum(c1,c2);
    c3.printNum();
    return 0;
}