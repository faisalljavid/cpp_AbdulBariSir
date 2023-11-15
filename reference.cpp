#include<iostream>
using namespace std;

int main() {
    
    int x = 10;
    int &y = x;

    cout << x << endl;

    y++; // 11
    x++; // 12

    cout << x << endl; // 12
    cout << y << endl; // 12

    cout << &x << " " << &y << endl;
    return 0;
}