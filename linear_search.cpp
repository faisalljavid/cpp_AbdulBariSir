#include<iostream>
using namespace std;

int main() {
    int A[5], n = 5, key;
    cout << "Enter numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    
    cout << "Enter key: ";
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        if (A[i] == key)
        {
            cout << "element found at index " << i;
            return 0;
        }
    }

    cout << "element not found!";

    return 0;
}