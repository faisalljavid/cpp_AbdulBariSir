#include<iostream>
using namespace std;

int main()
{
    char c[20];
    char c1[20];
    cout << "Enter name: ";
    //? cin >> c; takes only one word as input
    cin.getline(c, 50);  // 50 is maximum limit
    cout << c << endl;    
    cout << "Enter name again: ";
    cin.getline(c1, 50);
    cout << c1;
    return 0;
    cin.ignore()
}