#include <iostream>
using namespace std;

//! First one 

// class Demo
// {
// public:
//     Demo()
//     {
//         cout << "Constructor of Demo" << endl;
//     }
//     ~Demo()
//     {
//         cout << "Destructor of Demo";
//     }
// };

// void fun()
// {
//     //? Demo p;
//     Demo *p = new Demo(); //?  it'll only allocate = only constructor is called

//     delete p; //? now it calls destructor as well
// }

// int main()
// {
//     fun();
//     return 0;
// }



//! Second one (minor change)

#include <iostream>
using namespace std;

class Demo
{
    int *p;
public:
    Demo()
    {
        p = new int[10];
        cout << "Constructor of Demo" << endl;
    }
    ~Demo()
    {
        delete []p;
        cout << "Destructor of Demo";
    }
};

void fun()
{
    //? Demo p;
    Demo *p = new Demo(); //?  it'll only allocate = only constructor is called

    delete p; //? now it calls destructor as well
}

int main()
{
    fun();
    return 0;
}