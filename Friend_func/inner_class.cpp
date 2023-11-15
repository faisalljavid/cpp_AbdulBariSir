#include <iostream>
using namespace std;

class Outer
{
public:
    void fun()
    {
        i.display();
    }

//private: //? If set to private then in 27 we can't access it
    class Inner
    {
    public:
        void display()
        {
            cout << "Display of Inner" << endl;
        }
    };

    Inner i;
};

int main()
{
    Outer::Inner i;

    return 0;
}