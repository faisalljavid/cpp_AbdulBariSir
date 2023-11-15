#include <iostream>
using namespace std;

int Search(int A[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (key == A[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int A[] = {2, 4, 5, 6, 78, 44};
    int k;
    cout << "Enter an element to search: ";
    cin >> k;
    int index = Search(A, 6, k);
    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found";
    return 0;
}