#include<iostream>
using namespace std;

//! First one
// class Demo
// {
//     public:
//     int x=10;
//     int y=20;

//     void display() const
//     {
//         x++; //? can't write this
//         cout << x << " " << y << endl;
//     }
// };

// int main()
// {
//     Demo d;
//     d.display();
// }


//! Second one

void fun(const int &a, int &b)
{
    cout << a << " " << b << endl;
    //a++; //? can't write this
    b++;
}

int main()
{
    int x = 10;
    int y = 20;
    fun (x, y);
    cout << x << " " << y << endl;
    
}