#include <iostream>
using namespace std;

class Student
{
private:
    int rollno;
    string name;
    int mathMarks;
    int phyMarks;
    int chemMarks;

public:
    Student(int r, string n, int m, int p, int c)
    {
        rollno = r;
        name = n;
        mathMarks = m;
        phyMarks = p;
        chemMarks = c;
    }

    int total()
    {
        return mathMarks + phyMarks + chemMarks;
    }

    char grade()
    {
        float average = total() / 3;
        if (average > 60)
            return 'A';
        else if (average >= 40 && average < 60)
            return 'B';
        else
            return 'C';
    }
};

int main()
{
    int roll;
    string name;
    int p, m, c;
    cout << "Enter Roll no of Student: ";
    cin >> roll;
    cout << "Enter Name of Student: ";
    cin.ignore();  //! REMEMBER THIS
    getline(cin, name);
    cout << "Enter marks in 3 subjects: ";
    cin >> m >> p >> c;
    Student s(roll, name, m, p, c);
    cout << "Total marks: " << s.total() << endl;
    cout << "Grade of Student: " << s.grade() << endl;
    return 0;
}