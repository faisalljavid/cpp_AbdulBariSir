#include <iostream>
using namespace std;

namespace First
{
    void fun()
    {
        cout << "First" << endl;
    }
}

namespace Second
{
    void fun()
    {
        cout << "Second";
    }
}

using namespace First; //!
int main()
{
    fun(); //!
    Second::fun();
    return 0;
}