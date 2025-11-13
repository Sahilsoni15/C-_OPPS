//STATIC DATA MEMBERS

#include<iostream>
using namespace std;

class Employee{
    int id;
    // int count=0; //it not do the count increase(remember)
    static int count; //declaration of static data member

    public:
    void setData(void){
        cout<<"Enter the id: ";
        cin>>id;
        count++;
    }
    void getData(void){
        cout<<"The id of the employee is "<<id<<" and this is employee number "<<count<<endl;
    }

    static void getCount(void){
        cout<<"The Value of count is "<<count<<endl;
    }
};

//Count is a static data member so we need to define it outside the class
//Count is a static data member of class Employee
int Employee::count; //default value is 0

int main(){
    Employee sahil,rohit,mayank;

    // sahil.id=1;  
    // sahil.count=1;  //cannot do this as ID and count are private

    sahil.setData();
    sahil.getData();
    Employee::getCount();

    rohit.setData();
    rohit.getData();
    Employee::getCount();

    mayank.setData();
    mayank.getData();
    Employee::getCount();
    
    return 0;
}