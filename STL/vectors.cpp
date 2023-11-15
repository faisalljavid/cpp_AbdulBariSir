#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 40, 90};
    v.push_back(25);
    v.push_back(70);
    v.pop_back();

    // for(int x : v)
    // {
    //     cout << x << " ";
    // }

    vector<int>::iterator itr;
    for (itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << " ";
    }
    return 0;
}
