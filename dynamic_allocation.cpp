#include<iostream>
using namespace std;

// int main() {
    
//     int *p = new int[5];
//     p[0] = 12;
//     p[1] = 13;
//     cout << p[1] << endl;

//     delete []p;
//     p = nullptr;
//     return 0;
// }


int main () {
    int *p = new int[5];
    p[0] = 1;
    p[1] = 10;
    p[2] = 40;
    p[3] = 99;

    cout << p[0] << endl;
    cout << p[1] << endl;
    cout << p[2] << endl;
    cout << p[3] << endl;
    cout << "-----------------------" << endl;

    delete []p;
    

    p = new int[3];

    //? ALL are garbage values now
    cout << p[0] << endl;
    cout << p[1] << endl;
    cout << p[2] << endl;
    cout << p[3] << endl;
    return 0;   
}