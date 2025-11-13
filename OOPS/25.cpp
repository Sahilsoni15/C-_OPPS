//ARRAY OF OBJECTS & PASSING OBJECTS AS FUNCTION ARGUMENTS

#include<iostream>
using namespace std;


class Employee{
    int id;
    int salary;
    public:
        void setId(void){
            salary=122;
            cout<<"Enter the id of Employee: ";
            cin>>id;
        }
        void getId(void){
            cout<<endl<<"The if of this Employee is "<<id<<endl;
        }

};
int main(){
    // Employee Sahil,Rohit,Mayank;
    // Sahil.setId();
    // Sahil.getId();
    Employee SM[4];
    for(int i=0;i<4;i++){
    SM[0].setId();
    SM[0].getId();
    }

    return 0;
}