#include <iostream>
using namespace std;

//! First one

// class Base
// {
// public:
//     virtual void fun()
//     {
//         cout << "fun of Base" << endl;
//     }
// };

// class Derived : public Base
// {
// public:
//     void fun()
//     {
//         cout << "fun of Derived" << endl;
//     }
// };

// int main()
// {
//     Derived d;
//     Base *ptr = &d;
//     ptr->fun(); //? if virtual not present then Base class fun will be called
//     return 0;
// }


//! Second one

class BasicCar
{
public:
    virtual void start()
    {
        cout << "Basic car started" << endl;
    }
};

class AdvanceCar : public BasicCar
{
public:
    void start()
    {
        cout << "Advance car started" << endl;
    }
};

int main()
{
    BasicCar *p = new AdvanceCar();
    p->start();
}