<a href="javascript:void(0);" onclick="javascript:this.innerHTML=(this.innerHTML=='修改'?'关闭':'修改')">修改</a>
<a href="#">haha</a>
```cpp
#include <iostream>

using namespace std;

class Complex
{
public:
    Complex(int real=0,int image=0)
        :real(real),image(image){}
    Complex operator +(Complex & c)const{
        return Complex(real+c.real,image+c.image);
    }
    Complex operator*(const Complex &c) const{
        return Complex((real*c.real-image*c.image),(real*c.image+image*c.real));
    }
    friend ostream & operator <<(ostream & os,const Complex &c);

private:
    int real;
    int image;
};

ostream & operator <<(ostream & os,const Complex &c){
    if(c.image>0)
        os<<c.real<<"+"<<c.image<<"i";
    else
        os<<c.real<<c.image<<"i";
    return os;
}

int main()
{
    Complex a(1,2);
    Complex b(3,4);

    cout<<a+b<<endl;
    cout<<a*b<<endl;

    return 0;
}

```

```cpp
#include <iostream>

using namespace std;

class Shape
{
public:
    Shape(){}
    virtual double getArea(){
        return 0;
    }
};

class Circle:public Shape
{
private:
    double r;
public:
    Circle(double r):r(r){}
    virtual double getArea(){
        return r*r*3.14;
    }
};

class Squre:public Shape
{
private:
    int l;
public:
    Squre(int l):l(l){}
    virtual double getArea(){
        return double(l*l);
    }
};

int main()
{
    Squre s(5);
    Circle c(5);

    Shape *p[2]={&s,&c};
    for(int i=0;i<2;i++){
        cout<<p[i]->getArea()<<endl;
    }

    return 0;
}
```
