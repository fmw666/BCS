#include <iostream>

using namespace std;

class Circle
{
private:
    double r;
public:
    double GetC();
    double GetS();
    void ShowReaults();
    Circle();
    Circle(double i=0)
    {
        r=i;
    }
    Circle(Circle &p)   //复制构造函数 
    {
        r=p.r;
    }
    ~Circle()            //析构函数 
    {
        cout<<"Mr.Fan's Project."<<endl;
    }
};

double Circle::GetC()
{
    return 3.14*2*r;
}
double Circle::GetS()
{
    return 3.14*r*r;
}
int main()
{
    double r;
    cout<<"Please enter one number for 'r':";
    cin>>r;
    Circle i(r);
    cout<<"The Circle's C is:"<<i.GetC()<<endl<<"The Circle's S is:"<<i.GetS()<<endl;
    return 0;
}

