#include <iostream>
using namespace std;

class Base
{
public:
    virtual void fun1() = 0;
    virtual void fun2() = 0;
};

class Derived : public Base
{
public:
    void fun1()
    {
    }
    void fun2()
    {
        cout << "fun2 of Derived class" << endl;
    }
};

int main()
{
    Derived d;
    d.fun1();
    d.fun2();
    return 0;
}