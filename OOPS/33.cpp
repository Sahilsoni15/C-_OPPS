//DYNAMIC INITIALIZATION OF OBJECTS
#include<iostream>
using namespace std;

class BankDeposit{
    int principle;
    int years;
    float intrestRate;
    float returnValue;

    public:
        BankDeposit(){} // we need to make this default constructor 
        BankDeposit(int p,int y,float r);//r can be a value like 0.04;
        BankDeposit(int p,int y,int r);//r can be a value like 14
        void show();
};

BankDeposit :: BankDeposit(int p,int y,float r){
    principle=p;
    years=y;
    intrestRate=r;
    returnValue=principle;
    for (int i = 0; i < y; i++)
    {
        returnValue=returnValue*(1+r);
    }
    
}
BankDeposit :: BankDeposit(int p,int y,int r){
    principle=p;
    years=y;
    intrestRate=float(r)/100;
    returnValue=principle;
    for (int i = 0; i < y; i++)
    {
        returnValue=returnValue*(1+r);
    }
    
}

void BankDeposit ::show(){
    cout<<endl<<"principal amount was "<<principle<<" Return value after "<<years<<" is "<<returnValue<<endl;
}

int main(){
    BankDeposit bd1,bd2,bd3;
    int p,y;
    float r;
    int R;
    cout<<"Enter the value of p , y and r "<<endl;
    cin>>p>>y>>r;
    bd1=BankDeposit(p,y,r);
    bd1.show();
    
    cout<<"Enter the value of p , y and R "<<endl;
    cin>>p>>y>>R;
    bd1=BankDeposit(p,y,R);
    bd1.show();
    return 0;
}