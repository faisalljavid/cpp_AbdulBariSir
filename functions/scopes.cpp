#include <iostream>
using namespace std;

// int g = 5;
// void fun()
// {
//     int a = 10;
//     int g = 88;
//     a++;
//     {
//         int g = 0;
//         g++;
//         cout << g << endl;
//     }
//     g++; //? modifies nearest one
//     cout << a << " " << g << endl;
// }
// int main()
// {
//     cout << g << endl;
//     fun();
//     cout << g << endl;
//     return 0;
// }


int x = 10;
int main()
{
    int x = 20;
    {
        int x = 30;
        cout << x << endl;
    }
    cout << x << endl;

    cout << ::x << endl;  //? output = 10

    return 0;
}