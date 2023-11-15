#include<iostream>
using namespace std;

int main() {
    int A[7] = {4,5,3,1,33,45,66};
    int sum = 0;

    for (int i = 0; i < 7; i++)
    {
        sum = sum + A[i];
    }

    cout << "Sum is: " << sum << endl;
    
    return 0;
}