#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    void setLenth(int l)
    {
        if (l < 0)
            length = 0;
        else
            length = l;
    }
    void setBreadth(int b)
    {
        if (b < 0)
            breadth = 0;
        else
            breadth = b;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    Rectangle r1;
    r1.setLenth(10);
    r1.setBreadth(-5);
    cout << r1.getLength() << endl;
    cout << r1.getBreadth() << endl;
    cout << r1.area();
}