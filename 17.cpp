#include<iostream>
using namespace std;

inline int product(int a ,int b){
    return a*b;
}

// int product(int a ,int b){
//     //DO NOT RECOMENDED TO USE BELOW LINES WITH INLINE FUNCTION
//     static int c=0; //This execute only once
//     c=c+1;
//     return a*b+c;
// }

float moneyRecived(int currentMoney,float factor=1.04){
    return currentMoney*factor; 
}
// int main(){
//     int a,b;
//     cout<<"Enter the value of a and b ";
//     cin>>a>>b;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     return 0;
// }

int main(){
    int money=100000;
    cout<<"If you have "<<money<<" RS in your account will recive "<<moneyRecived(money)<<"RS after 1 year"<<endl;
    cout<<"For VIP:If you have "<<money<<" RS in your account will recive "<<moneyRecived(money,1.1)<<"RS after 1 year";
}