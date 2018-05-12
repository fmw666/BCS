/*
#include<iostream>
using namespace std;
class Complex{
    private:
        double i;
        double j;
    public:
        friend Complex operator +(Complex &c1,Complex &c2);
        Complex operator -(Complex &c2);
        Complex(double ii=0,double jj=0){
            i=ii;
            j=jj;
        }
        void add(Complex &c)
        {
            i+=c.i;
            j+=c.j;
        }
        void show(){
            cout<<i<<"+"<<j<<"i"<<endl;
        }
};
Complex Complex::operator +(Complex &c1,Complex &c2)
{
    return Complex(c1.i+c2.i,c1.j+c2.j);
}
Complex Complex::operator -(Complex &c2)
{
    return Complex(i-c2.i,j-c2.j);
}
int main()
{
    Complex c1(6,5);
    c1.show();
    Complex c2(3.5,0);
    c2.show();
//    c1.add(c2);
    Complex c3;
    c3=c1+c2+c1;
    c3.show();
    c3=c1-c2;
    c3.show();
}
*/
/*
#include<iostream>
using namespace std;
class Base1{
    public:
        //virtual void display();
        void display();
};
void Base1::display(){
    cout<<"Base1::dispaly()"<<endl;
}
class Base2:public Base1{
    public:
        void display();
};
void Base2::display(){
    cout<<"Base2::display()"<<endl;
}
class Derived:public Base2{
    public:
        void display();
};
void Derived::display(){
    cout<<"Derived::display()"<<endl;
}
void fun(Base1 *ptr){
    ptr->display();
}
int main(){
    Base1 base1;
    Base2 base2;
    Derived derived;
    fun(&base1);
    fun(&base2);
    fun(&derived);
    return 0;
}
*/
/*
#include<iostream>
using namespace std;

//template<typename T>
template<class T>
class Complex
{
public:
    Complex(T x,T y):x(x),y(y){}
    void show();
private:
    T x;
    T y;
};

template<class T>
void Complex<T>::show()
{
    cout<<"("<<x<<","<<y<<")"<<endl;
}

//template<typename T>
template<class T>
T abs(T x)
{
    return x<0?-x:x;
}
int main()
{
    int a=-5;
    double b=-2;
    float c=-1.01;
    a=abs(a);
    b=abs(b);
    c=abs(c);
    cout<<a<<","<<b<<","<<c<<endl;

    Complex<int> c1(1,2);
    c1.show();
    Complex<double> c2(2.1,2.4);
    c2.show();
    return 0;
}
*/
