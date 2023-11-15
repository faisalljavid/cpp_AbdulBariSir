#include <iostream>
using namespace std;

//! First example

// class Test
// {
// public:
//     int a;
//     static int count;
//     Test()
//     {
//         a = 10;
//         count++;
//     }
//     static int getCount()
//     {
//         return count;
//     }
// };

// int Test::count = 0;

// int main()
// {
//     Test t1, t2;

//     // cout << t1.count << endl;
//     // cout << t2.count << endl;
//     // t1.count = 25; //? count is "shared"
//     // cout << t2.count << endl;
//     // cout << Test::count << endl;

//     cout << Test::getCount() << endl;
//     cout << t1.getCount() << endl;
//     return 0;
// }

//! Second Example (best)

class Student
{
public:
    int roll;
    string name;
    static int addNo;
    Student(string n)
    {
        addNo++;
        roll = addNo;
        name = n;
    }

    void display()
    {
        cout << "Name " << name << endl << "Roll " << roll<<endl;
    }
};

int Student::addNo = 0;

int main()
{
    Student s1("John");
    Student s2("Ravi");
    Student s3("Khan");
    Student s4("Javid");
    Student s5("Faisal");
    s1.display();
    s2.display();
    s3.display();
    s5.display();
    cout << "Number of addmissions: " << Student::addNo << endl;
}