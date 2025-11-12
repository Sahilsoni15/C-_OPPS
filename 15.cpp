#include<iostream>
using namespace std;

// funtion prototype
// type funtion-name(arguments);
// int sum(int a, int b); -- >Acceptable
// int sum(int a,b); -->NOT ACCEPTABLE
int sum(int,int); //-->ACCEPTABLE
// void g(void); -->ACCEPTABLE
void g(); //-->ACCEPTABLE
// int sum(int a,int b){
//     int c=a+b;
//     return c;
// }
int main(){
    int num1,num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the 2nd number: ";
    cin>>num2;
    // num 1 and num 2 are the actual paramerters
    cout<<"The sum is "<<sum(num1 , num2);
    g();
    return 0;
}

int sum(int a,int b){
    // a and b will be taking the values from actual parameters num1 and num2.
    int c=a+b;
    return c;
}

void g(){
    cout<<"\nHello,Good morning";
}