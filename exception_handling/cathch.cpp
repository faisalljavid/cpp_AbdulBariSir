#include <iostream>
using namespace std;

class MyException1 : exception
{

};
class MyException2 : public MyException1
{

};

int main()
{
    try
    {
        throw MyException2();
    }

    catch (MyException2 e) //? child class exception comes first
    {
        cout << "My Exception 2 catch";
    }

    catch (MyException1 e)
    {
        cout << "My Exception 1 catch";
    }

    catch (int e)
    {
        cout << "Int catch" << endl;
    }

    catch (double e)
    {
        cout << "Double catch" << endl;
    }

    catch (...)
    {
        cout << "All catch" << endl;
    }
    return 0;
}