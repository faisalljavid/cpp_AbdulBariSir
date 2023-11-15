#include<iostream>
using namespace std;

int main() {
    int A[10] = {6, 8, 12, 65, 33, 11, 12, 90, 110, 3};
    int low = 0, high = 9, key, mid;
    cout << "Enter key: ";
    cin >> key;

    while (low <= high)
    {
        mid = (low + high)/2;
        
        if (key == A[mid])
        {
            cout << "found at: " << mid;
            return 0;
        }

        else if (key < A[mid])
        {
            high = mid - 1;
        }
        
        else
        {
            low = mid + 1;
        }
    } 
    cout << "element not found";
    return 0;
}