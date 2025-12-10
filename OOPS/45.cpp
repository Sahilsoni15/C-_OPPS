#include<iostream>
using namespace std;

/*
student --->Test [done]
student --->sports
test --->result
sports --->result
*/
class Students{
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no=a;
        }
        void print_number(void){
            cout<<"Your roll number is "<<roll_no<<endl;
        }
};

/*
Also be writen as 
----->      class Test: public virtual Students 
*/

class Test:virtual public Students{
    protected:
        float maths,physics;
        public:
            void set_marks(float m1, float m2){
                maths=m1;
                physics=m2;
            }
            void print_marks(void){
                cout<<"Your Result is here: "<<endl
                <<"Maths: "<<maths<<endl
                <<"Physics: "<<physics<<endl;
            }
};


// class Sports :virtual public Students --> no problem if we do the virtual public or public virtual

class Sports :public virtual Students {
protected:
    float score;
    public:
        void set_score(float sc){
            score=sc;
        }
        void print_score(void){
            cout<<"Your PT score is ";
        }

};

class Result:public Test,public Sports{
    private:
        float total;
    public:
        void display(void){
            total=maths+physics+score;
            print_number();
            print_marks();
            print_score();
            cout<<"Your Total score is: "<<total<<endl;
        }
};

int main(){
    Result sahil;
    sahil.set_number(045);
    sahil.set_marks(82.5,88.5);
    sahil.set_score(9);
    sahil.display();
    return 0;
}