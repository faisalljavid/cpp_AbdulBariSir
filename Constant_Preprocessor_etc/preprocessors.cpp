#include<iostream>
using namespace std;

#define PI 3.1425

#ifndef PI
    #define PI 3.1
#endif

#define MAX(x,y) (x>y?x:y)

#define MSG(x) #x    //? acts as a string


int main()
{
    cout << PI << endl;
    cout << MAX(4,5) << endl;
    cout << MSG(Hello) << endl;
    return 0;
}