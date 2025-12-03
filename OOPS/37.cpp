//INHERITANCE
#include <iostream>
using namespace std;

// Base Class -which class give the birth
class Employee
{
    public:
    int id;
    float salary;
    public:
        Employee(int inpId){
            id=inpId;
            salary=35;
        }

        Employee(){} //Default constructor
};

// Derived Class- Which class take the birth from the base class
//Derived Class syntax
/*
class {{derived- class name}} : {{visiblity-mode(public/private)}} {{base-class-name}}
{
    class memebers/methods/etc..........
}
Note -> Visiblity mode--> 
1.Default visiblity mode is private
2.Public Visiblity Mode: Public members of the base becomes Public members of the derived class
3.Private  Visiblity Mode: Public members of the base becomes Private members of the derived class
4.Private members are never inherited
*/

class Programmer : public Employee{
    public:
    int language_code;
    Programmer(int inpId){
        id=inpId;
        language_code=9;
    }
    void getData(){
        cout<<id<<endl;
    }
};
int main()
{
    Employee sahil(1),rohit(2);
    cout<<sahil.salary<<endl;
    cout<<rohit.salary<<endl;
    Programmer SkillF(10);
    cout<<SkillF.language_code<<endl;
    SkillF.getData();
    cout<<SkillF.id<<endl;  //WHEN DO THE VISIBLITY MODE PUBLIC 
    return 0;
}