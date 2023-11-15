#include<iostream>
using namespace std;

class Base
{
private:
    int a;

protected:
    int b;

public:
    int c;

    void funBase()
    {
        a = 10;
        b = 5;
        c = 15;
    }
};

class Derived : public Base
{
public:
    void funDerived()
    {
        a = 10;
        b = 5;
        c = 15;
    }
};

int main()
{
    Base b;
    b.a = 10;   //? not accessible because private member
    b.b = 5;    //? not accessible because protected member
    b.c = 20;
}