#include <iostream>
using namespace std;

template <class T>
T maxm(T a, T b)
{
    return a > b ? a : b;
}

//? These are totally not needed
// int maxm(int a, int b)
// {
//     return a>b?a:b;
// }

// float maxm(float a, float b)
// {
//     return a>b?a:b;
// }

int main()
{
    cout << maxm(12, 14) << endl;
    cout << maxm(2.4f, 1.4f) << endl; // float
    cout << maxm(2.3, 4.5) << endl;  // double
    return 0;
}