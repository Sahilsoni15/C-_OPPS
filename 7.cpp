#include<iostream>

using namespace std;

int main(){

    // FLOAT,DOUBLE,LONG DOUBLE LITERALS
    // float d=34.4;
    // // float d=34.4f;
    // long double e=34.4;
    // // long double e=34.4l;

    // cout<<"Size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"Size of 34.4 F is "<<sizeof(34.4F)<<endl;
    // cout<<"Size of 34.4 f is "<<sizeof(34.4f)<<endl;
    // cout<<"Size of 34.4 L is "<<sizeof(34.4L)<<endl;
    // cout<<"Size of 34.4 l is "<<sizeof(34.4l)<<endl;

    // // REFRENCE VARIABLE 
    // float x=455;
    // float & y= x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    // Type casting 
    int a=45;
    float b=45.6;
    cout<<"The value of a is: "<<(float)a<<endl;
    cout<<"The value of a is: "<<float(a)<<endl;

    cout<<"The value of b is: "<<(int)b<<endl;
    cout<<"The value of b is: "<<int(b)<<endl;

    cout<<"The expression is "<<a+b<<endl;
    cout<<"The expression is "<<a+int(b)<<endl;
    cout<<"The expression is "<<a+int(b)<<endl;
    return 0;
}