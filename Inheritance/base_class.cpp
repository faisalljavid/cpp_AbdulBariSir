#include <iostream>
using namespace std;

//! First one

// class Base
// {
// public:
//     void fun1()
//     {
//         cout << "fun1 of base" << endl;
//     }
// };

// class Derived : public Base
// {
// public:
//     void fun2()
//     {
//         cout << "fun2 of derived" << endl;
//     }
// };

// int main()
// {
//     Derived d;
//     Base *ptr = &d;
//     ptr->fun1();
//     //ptr->fun2(); //? can only call functions which are present in Base class

//     return 0;
// }

//! Second one

// class Rectangle
// {
// public:
//     void area()
//     {
//         cout << "Area of Rectangle" << endl;
//     }
// };

// class Cuboid : public Rectangle
// {
// public:
//     void volume()
//     {
//         cout << "Cuboid Volume" << endl;
//     }
// };

// int main()
// {
//     Cuboid c;
//     Rectangle *p = &c;
//     p->area();
//     //p->volume(); //? same reason as above given
// }


//! Third one (Best example)

class BasicCar
{
    public:
    void start()
    {
        cout <<"Car Started" << endl;
    }
};

class AdvanceCar:public BasicCar
{
    public:
    void playMusic()
    {
        cout << "Music Playing" << endl;
    }
};

int main()
{
    AdvanceCar a;
    BasicCar *ptr = &a;
    ptr->start();
    //ptr->playMusic(); //? same reason as above

}