#include <iostream>
using namespace std;

//! Call by value

// void swap(int a, int b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
//     cout << a << " " << b << endl;
// }

// int main()
// {
//     int x = 10, y = 20;
//     swap(x, y);
//     cout << x << " " << y; //? Values not changed
//     return 0;
// }

//! Call by Address

// void swap(int *a, int *b)
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
//     cout << *a << " " << *b << endl;
// }

// int main()
// {
//     int x = 10, y = 20;
//     swap(&x, &y);
//     cout << x << " " << y; //? Values are changed
//     return 0;
// }



//! Call by Reference

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;
    swap(x, y);
    cout << x << " " << y; //? Values are changed
    return 0;
}