//Create a function which takes 2 point objects and computes the distance between those 2 points

#include <iostream>
using namespace std;

class Point
{
    int x1,x2, y1,y2;
    friend int Distance(Point p);
public:
    Point(int a1, int a2,int b1,int b2)
    {
        x1= a1;
        x2=a2;
        y1 = b1;
        y2=b2;
    }
    void displatPoint()
    {
        cout << "This point of x1,x2 is ( " << x1 << "," << y1<< " )" << endl;
        cout<<"The point of y1,y2 is (" <<x2<<","<<y1<<" )"<<endl;
    }
};

int Distance(Point p){
    return sqrt(pow(p.x2-p.x1,2)+pow(p.y2-p.y1,2));
}

int main()
{
    Point p(1, 2,4,5);
    p.displatPoint();

    int dist=Distance(p);
    cout<<"Distance B/w points: "<<dist<<endl;
    return 0;
}