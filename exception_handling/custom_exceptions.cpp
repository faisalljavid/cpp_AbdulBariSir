#include <iostream>
using namespace std;

class MyException : exception  //? exception is built-in class
{

};



int division(int a, int b) throw (MyException) //? 'throw (My exception)' is optional
{
    //? if you don't want function to throw anything then set: 'throw()' empty

    if (b == 0)
        throw MyException();
    return a / b;
}



int main()
{
    int x = 10, y = 0, z;

    try
    {
        z = division(x, y);
        cout << z << endl;
    }
    catch (MyException e)
    {
        cout << "Divison by zero " << endl;
    }
    return 0;
}