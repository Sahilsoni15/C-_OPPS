#include<iostream>
using namespace std;

class Cricketer{
    private:
        int runs,matches,highestscore;
    
    public:
        string name;int age;

    void setData(int r, int m, int hS);
    void getData(){
        cout<<"Name of the cricketer: "<<name<<endl;
        cout<<"Age of " <<name<<" : "<<age<<endl;
        cout<<"Runs of the" <<name<< " : "<<runs<<endl;
        cout<<"Matches played "<< name<< " : "<<matches<<endl;
        cout<<"Highest score by "<< name<<" : "<<highestscore<<endl;
    }
};

void Cricketer :: setData(int r , int m, int hS){
    runs=r;
    matches=m;
    highestscore=hS;
}
int main(){
    Cricketer Rohit_Sharma;
    Rohit_Sharma.name="Rohit Sharma";
    Rohit_Sharma.age=38;
    Rohit_Sharma.setData(19700,502,264);
    Rohit_Sharma.getData();
    return 0;
}