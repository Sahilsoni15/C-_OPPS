// Nesting Member Function
#include <iostream>
using namespace std;

// Nesting of member functions
class Binary
{
    private:    
        string s;
        void chck_bin(void);


    // string s;             // by default class members are private
    // void chck_bin(void);

    public:
    void read(void);
    void ones_compliment(void);
    void display(void);

};

void Binary :: read(void){
    cout<<"Enter a Binary Number: "<<endl;
    cin>>s;
}

void Binary :: chck_bin(void){
    for(int i =0;i< s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorect Binary format"<<endl;
            exit(0);
        }
    }

}
void Binary :: ones_compliment(void){
    chck_bin();  //Nested Function-->A nested function (in C++) means one member function of a class is called inside another member function of the same class.
    for(int i=0;i < s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
}

void Binary :: display(void){
    cout<<"Displaying your Binary Number"<<endl;
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
    }
    cout<<endl;
}

int main()
{
    Binary b;
    b.read();
    // b.chck_bin();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}