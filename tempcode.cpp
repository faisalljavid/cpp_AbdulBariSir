#include<iostream>
using namespace std;

int main() {
    // int A[4] = {2, 4, 5, 1};

    // for (int x : A)
    //     cout << x << endl;

    int A[2] = {3, 4};

    for (auto x : A)
        cout << x++ << endl;
}

