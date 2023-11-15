#include <iostream>
using namespace std;

// int sum(int a, int b, int c = 0)
// {
//     return a + b;
// }

// int main()
// {
//     cout << sum(10, 5) << endl;
//     cout << sum(12, 34, 21);
//     return 0;
// }

int max(int a = 0, int b = 0, int c = 0)
{
    return a > b && a > c ? a : b > c ? b : c;
}

int main()
{
    cout << max() << endl;
    cout << max(10) << endl;
    cout << max(12, 13) << endl;
    cout << max(13, 14, 15) << endl;
}