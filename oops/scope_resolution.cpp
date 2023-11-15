#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);
    int getLength();
    int getBreadth();
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};



int main()
{
    Rectangle r1(10, 11);
    cout << "Area is: " << r1.area() << endl;
    if (r1.isSquare())
        cout << "It is a Square" << endl;
    else
        cout << "Not a Square" << endl;
}




Rectangle::Rectangle() //? non parameterised constructor
{
    length = 1;
    breadth = 1;
}

//! If I provide some default values here then I don't need the above constructor
Rectangle::Rectangle(int l = 1, int b = 1) //? parameterised constructor
{
    setLength(l);
    setBreadth(b);
}

Rectangle::Rectangle(Rectangle &r) //? copy constructor
{
    length = r.length;
    breadth = r.breadth;
}

void Rectangle::setLength(int l)
{
    if (l < 0)
        length = 0;
    else
        length = l;
}
void Rectangle::setBreadth(int b)
{
    if (b < 0)
        breadth = 0;
    else
        breadth = b;
}
int Rectangle::getLength()
{
    return length;
}
int Rectangle::getBreadth()
{
    return breadth;
}
int Rectangle::area()
{
    return length * breadth;
}
int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}
bool Rectangle::isSquare()
{
    return length == breadth;
}
Rectangle::~Rectangle()
{
    cout << "Rectangle Destroyed";
}