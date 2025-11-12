#include<iostream>
using namespace std;

int sum(int a,int b){
    return a+b;
}

int sum(int a,int b,int c){
    return a+b+c;
}

//VOLUME OF CYLINDER
int volume(double r,int h){
    return(3.14 *r*r*h);
}


//VOLUME OF A CUBE
int volume(int a){
    return a*a*a;
}

//VOLUME OF RECTANGLE
int volume(int l,int b, int h){
    return (l*b*h);
}

int main(){
    cout<<"Sum of the 2 numbers(3 and 6) "<<sum(3,6)<<endl;
    cout<<"Sum of the 3 numbers(3,4,6) "<<sum(3,4,6)<<endl;

    cout<<"Volume of cylinder of radius 3 and height 6 is "<<volume(3,6)<<endl;
    cout<<"Volume of cube of side 3 is "<<volume(3)<<endl;
    cout<<"Volume of rectange(3,5,6) is "<<volume(3,5,6)<<endl;
    return 0;
}