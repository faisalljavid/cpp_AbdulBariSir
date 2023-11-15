#include<iostream>
using namespace std;

int main() {
    int A[5] = {2, 4, 6, 8, 10};
    int *p = A, *q = &A[4];

    cout << *p << endl; // 2
    
    p++;
    cout << *p << endl; // 4
    
    p--;
    cout << *p << endl; // 2

    cout << "------------------------" << endl;

    cout << *(p + 2) << endl;  // 6

    cout << q - p << endl; // 4 elemets away from each other

    cout << p - q << endl; // -4 means 2nd pointer is far away
    return 0;
}