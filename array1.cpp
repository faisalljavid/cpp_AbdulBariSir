#include<iostream>
using namespace std;

// int main() {
//     int A[3] = {4,2,8};
    
//     for (int i = 0; i < 3; i++)
//     {
//         cout << A[i] << endl;
//     }

//     return 0;
// }

// Another way to go through



int main() {
    // int A[4] = {2, 4, 5, 1};

    // for (int x : A)
    //     cout << x << endl;

    float A[5] = {2.4f, 6.2f, 3, 4, 7.8f};

    for (auto x : A)
        cout << x << endl;
}

