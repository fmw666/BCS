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
