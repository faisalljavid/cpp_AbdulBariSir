#include <iostream>
using namespace std;

int main()
{
    int x = 10, y = 0, z;
    try
    {
        if (y == 0)
            throw 101;
        z = x / y;
        cout << z << endl;
    }
    catch (int e)
    {
        cout << "Divison by zero " << e << endl;
    }
    return 0;
}