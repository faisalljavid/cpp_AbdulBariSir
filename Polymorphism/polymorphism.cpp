#include <iostream>
using namespace std;

class Car
{
public:
    virtual void start()
    {
        cout << "Car started" << endl;
    }
};

class Innova : public Car
{
public:
    void start()
    {
        cout << "Innova Started" << endl;
    }
};

class Swift : public Car
{
public:
    void start()
    {
        cout << "Swift Started" << endl;
    }
};

int main()
{
    //? This is called Runtime Polymorphism
    Car *p = new Innova();
    p->start();
    delete p;

    p = new Swift();
    p->start();
    delete p;
    
    return 0;
}