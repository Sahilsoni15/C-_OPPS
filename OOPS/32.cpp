//Use constructor As Default Arguments
#include<iostream>
using namespace std;

class Simple{
    int data1;
    int data2;
    int data3;
    public:
    Simple(int a,int b=9,int c=45){
        data1=a;
        data2=b;
        data3=c;
    }
    void printdata();
    
};

void Simple :: printdata(){
    cout<<"The value of data is "<<data1<<","<< data2<<" and "<<data3 <<endl;
}


int main(){
    Simple s(1,8,6);
    s.printdata();
    return 0;
}