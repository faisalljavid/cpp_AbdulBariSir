// #include <iostream>
// using namespace std;
//
// class Test
// {
// private:
//     int a;

// protected:
//     int b;

// public:
//     int c;
//     friend void fun();
// };

// void fun()
// {
//     Test t;
//     t.a = 10;
//     t.b = 5;
//     t.c = 133;
// }

// int main()
// {

//     return 0;
// }



class Your;
class My
{
private:
    int a;

protected:
    int b;

public:
    int c;
    friend Your;
};
class Your
{
public:
    My m;
    void fun()
    {
        m.a = 10;
        m.b = 10;
        m.c = 10;
    }
};
int main()
{

    return 0;
}
