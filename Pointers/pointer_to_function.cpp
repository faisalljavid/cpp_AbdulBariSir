#include<iostream>
using namespace std;

int max (int x, int y)
{
    return x > y ? x : y;
}

int min (int x, int y)
{
    return x < y ? x : y;
}

int main() {
    
    int (*fp) (int, int);

    fp = max;
    int maximum = (*fp) (10,5);
    cout << maximum << endl;

    fp = min;
    int minimum = (*fp) (10,5);
    cout << minimum << endl;
    
    return 0;
}