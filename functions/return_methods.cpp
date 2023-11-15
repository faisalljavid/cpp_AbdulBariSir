#include <iostream>
using namespace std;

//! Return by address

// int *fun()
// {
//     int *p = new int[5];
//     for (int i = 0; i < 5; i++)
//     {
//         p[i] = 5 * i;
//     }
//     cout << "p: " << p << endl;
//     return p;
// }

// int main()
// {
//     int *q = fun();
//     cout << "q: " << q << endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << q[i] << endl;
//     }
//     return 0;
// }


//! Return by Reference

int &fun(int &x)
{
    return x;
}

int main()
{
    int a = 10;
    fun(a) = 25;
    cout << a << endl;
}