#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> v = {10, 20, 40, 90};
    v.push_back(25);
    v.push_back(70);
    v.pop_back();

    // for(int x : v) //? for each loop c++11 introduced it
    // {
    //     cout << x << " ";
    // }

    list<int>::iterator itr;
    for (itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << " ";
    }
    return 0;
}