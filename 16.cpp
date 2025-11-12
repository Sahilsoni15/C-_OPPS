#include<iostream>
using namespace std;

int sum(int a,int b){
    int c=a+b;
    return c;
}


//This will not swap a and b
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}

//CALL BY REFRENCE USING POINTERS
void swapPointer(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

//CALL BY REFRENCE USING C++ REFRENCE VARIABLES
void swapPointerVar(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

//CALL BY REFRENCE  USING C++ REFRENCE VARIABLES
// int &
int  & swapRefrenceVar(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    return a;
}

int main(){
    int a=4,b=5;
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    // swap(a,b); //This will not swap a and b
    // swapPointer(&a,&b); // This will swap a and b using pointer refrence
    swapPointerVar(a,b);//This will swap a and b using refrence variable 
    // swapRefrenceVar(a,b)= 744; //This will swap a and b using refrence variable
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    return 0;
}
