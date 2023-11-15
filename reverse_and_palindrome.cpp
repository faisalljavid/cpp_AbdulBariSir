#include<iostream>
using namespace std;

int main() {
    int r, n, m, rev = 0;
    cout << "Enter num: ";
    cin >> n;
    m = n;

    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }
    if (rev == m) {
        cout << "Palindrome number!";
    }
    else {
        cout << "Not Palindrome number";
    }
    return 0;
}