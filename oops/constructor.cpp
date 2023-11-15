#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:

    /*Rectangle() //? non parameterised constructor
    {
        length = 1;
        breadth = 1; 
    }
    */


    //! If I provide some default values here then I don't need the above constructor
    Rectangle(int l=1, int b=1) //? parameterised constructor
    {
        setLenth(l);
        setBreadth(b);
    }

    Rectangle(Rectangle &r) //? copy constructor
    {
        length = r.length;
        breadth = r.breadth; 
    }







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
    // Rectangle r1;
    // cout << r1.area() << endl; //non parameterised constructor
    Rectangle r1;
    //! Rectangle r1(10,5); 
    cout << r1.area() << endl; // parameterised constructor
    Rectangle r2(r1);
    cout << r2.area()<<endl; // copy constructor
}