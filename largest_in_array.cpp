#include<iostream>
using namespace std;

int main() {
    int A[7] = {4,5,3,1,33,45,66};
    int max;
    max = A[0];

    for (int i = 1; i < 7; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    cout << "Maximum is: " << max;

    return 0;
}