#include<iostream>
using namespace std;

//DESTRUCTOR NEVER TAKES AN ARGUMENT NOR DOES IT RETURN ANY VALUE
int cont=0;

class Num{
    public:
        Num(){
            cont++;
            cout<<"This is the time when constructor is called for object number"<<cont<<endl;
        }

        ~Num(){
            cout<<"This is the time when the destructor is called for object number"<<cont<<endl;
            cont--;
        }
}; 

int main(){
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating two object n1 "<<endl;
    Num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        Num n2,n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}